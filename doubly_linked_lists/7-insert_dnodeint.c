#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to the pointer of the head of the list
 * @idx: index where the new node should be added
 * @n: integer value to store in the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current;
	dlistint_t *new;
	unsigned int count;

	current = *h;
	count = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	while (current != NULL)
	{
		if (count == idx)
		{
			new->n = n;
			new->prev = current->prev;
			new->next = current;
			current->prev->next = new;
			current->prev = new;
			return (new);
		}
		count++;
		current = current->next;
	}
	free(new);
	if (count == idx)
		return (add_dnodeint_end(h, n));
	return (NULL);
}
