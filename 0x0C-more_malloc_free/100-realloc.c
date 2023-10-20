#include <stdlib.h>

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	char *old_ptr = ptr;
	char *new_ptr_c;  /* Casted to char */

	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		return (new_ptr);
	}

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);

	new_ptr_c = new_ptr;  /* Casted to char */

	for (i = 0; i < old_size && i < new_size; i++)
		new_ptr_c[i] = old_ptr[i];

	free(ptr);
	return (new_ptr);
}
