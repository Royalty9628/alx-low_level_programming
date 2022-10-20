#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table I want to delete
 * Return: nothinng
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int x;
	hash_node_t *hash_nodes;
	hash_node_t *temp;

	if (!ht)
		return;

	for (x = 0; x < ht->size; x++)
	{
		hash_nodes =  ht->array[x];
		while (hash_nodes)
		{
			temp = hash_nodes;
			hash_nodes = hash_nodes->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}
	free(ht->array);
	free(ht);
}
