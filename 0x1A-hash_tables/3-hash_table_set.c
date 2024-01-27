#include "hash_tables.h"

/**
 * hash_table_set - Adds or updates an element in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to add - cannot be an empty string.
 * @value: The value associated with the key.
 *
 * Return: 1 if successful, 0 on failure.
 * Description: If the key already exists, updates the value.
 *              If the key doesn't exist, adds a new key-value pair.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int index;
hash_node_t *node;
hash_node_t *new;

if (!ht || !key || !*key || !value)
return (0);

index = key_index((const unsigned char *)key, ht->size);

for (node = ht->array[index]; node; node = node->next)
{
if (strcmp(node->key, key) == 0)
{
free(node->value);
node->value = strdup(value);
return ((node->value) ? 1 : 0);
}
}

new = malloc(sizeof(hash_node_t));
if (!new)
return (0);

new->key = strdup(key);
new->value = strdup(value);

if (!new->key || !new->value)
{
free(new->key);
free(new->value);
free(new);
return (0);
}

new->next = ht->array[index];
ht->array[index] = new;

return (1);
}
