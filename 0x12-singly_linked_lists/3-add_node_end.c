#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list list_t
 * @head: a pointer to pointer to struct
 * @str: a pointer to string
 * Return: the adress of the new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *tmp;

	tmp = malloc(sizeof(list_t));
	if (tmp == NULL)
		return (NULL);
	tmp->str = strdup(str);
	tmp->len = strlen(str);
	tmp->next = NULL;
	if (*head == NULL)
	{
		*head = tmp;
		return (tmp);
	}
	ptr = *head;
	while (ptr->next != NULL)
		ptr = ptr->next;

	ptr->next = tmp;
	return (tmp);
}
