#include "lists.h"
/**
 * add_node_end - Ajoute un nouveau nœud à la fin d'une liste list_t.
 * @head: Double pointeur vers la tête de la liste.
 * @str: Chaîne de caractères à dupliquer dans le nouveau nœud.
 *
 * Return: L'adresse du nouvel élément, ou NULL en cas d'échec.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *current;
	int i;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		;
	new->str = strdup(str);
	new->len = i;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new;
	}
	return (new);
}
