#include "hash_tables.h"

/**
* key_index - Get the index for a key in a hash table.
* @key: The key to find the index for.
* @size: The size of the hash table array.
*
* Return: The calculated index for the key.
* Description: Uses the djb2 hashing algorithm.
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
return (hash_djb2(key) % size);
}
