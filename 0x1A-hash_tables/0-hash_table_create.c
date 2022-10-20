#inclumde "hash_tables.h"

/*
 * hash_table_create - function that creates hash table
 * @size: the array size of hash table
 * Return: Pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ptr_to_array;
	unsigned long int y;

	if (size < 1)
		return (NULL);

	ptr_to_array == malloc(sizeof(hash_table_t));
	if (ptr_to_array == NULL)
		return (NULL);

	ptr_to_array->size = size;

	ptr_to_array = malloc(sizeof(hash_node_t *) * size);
	if (ptr_to_array->array == NULL)
	{
		free(ptr_to_array);
		return (NULL);
	}

	for (y = 0; y < size; y++)
	{
		ptr_to_array->array[y] = NULL;
	}

	return (ptr_to_array);
}
