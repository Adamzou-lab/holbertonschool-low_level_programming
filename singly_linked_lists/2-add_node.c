#include "lists.h"

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int i;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		;
	new->len = i;
	new->str = strdup(str);
	new->next = *head;

	*head = new;

	return (new);
}