#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: is the hash table I want to look into
 * @key: is the key I'm looking for in the hash table
 * Return: the value associated with the key or NULL if key is not found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int index = 0;
	hash_node_t *node;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
	    key == NULL || strlen(key) == 0)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];

	while (node != NULL && node->key != NULL && strcmp(key, node->key) > 0)
		node = node->next;

	if (node == NULL || node->key == NULL || strcmp(key, node->key) != 0)
		return (NULL);
	else
		return (node->value);
}
