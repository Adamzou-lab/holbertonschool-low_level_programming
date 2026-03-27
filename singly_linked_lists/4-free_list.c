#include "lists.h"
/**
 * free_list - Libère une liste de type list_t.
 * @head: Pointeur vers le début de la liste.
 *
 * Description: Libère chaque nœud de la liste, ainsi que la chaîne
 * de caractères (str) allouée dynamiquement à l'intérieur.
 */
void free_list(list_t *head)
{
	list_t *current;
	list_t *next;

	current = head;

	while (current != NULL)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
}
