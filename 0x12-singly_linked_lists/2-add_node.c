#include "lists.h"

/**
 * _strlen - get the length of a string
 * @s: string parameter
 * Return: Always 0
 */

int _strlen(const char *s)
{
	int length  = 0;

	while (*(s + length))
		length++;
	return (length);
}


/**
 * add_node - function that adds a new node at the beginning of a list_t list.
 * @head: double pointer to a lined list
 * @str: string dd to a new node
 * Return: number of nodes
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = _strlen(str);
	new->next = *head;
	*head = new;
	return (new);
}
