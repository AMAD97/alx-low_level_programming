#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
 * create_file - Creates a file with specified permissions
 * and writes content to it.
 * @filename: The name of the file to create.
 * @text_content: The text content to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor, write_result;

	/* Check for NULL filename */
	if (filename == NULL)
		return (-1);

	/**
	 * Create the file with permission = open(, 0600);
	if (file_descriptor == -1)
	return (-1);
	*/

	/* Check if text_content is NULL */
	if (text_content != NULL)
	{
		/* Write content to the file */
		write_result = write(file_descriptor, text_content, strlen(text_content));
		if (write_result == -1)
	{
		close(file_descriptor);
		return (-1);
	}
	}

	/* Close the file */
	close(file_descriptor);

	return (1);
}
