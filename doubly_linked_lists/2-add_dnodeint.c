#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: pointer to the pointer of the head of the list
 * @n: integer value to store in the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new; /* déclare un pointeur vers le nouveau node */

	new = malloc(sizeof(dlistint_t)); /* alloue la mémoire pour le node */
	if (new == NULL) /* vérifie que malloc n'a pas échoué */
		return (NULL);
	new->n = n; /* stocke la valeur dans le node */
	new->next = *head; /* new regarde vers l'ancienne head (à sa droite) */
	new->prev = NULL; /* new est en tête, personne devant lui (à sa gauche) */
	if (*head != NULL) /* vérifie que la liste n'est pas vide */
		(*head)->prev = new; /* l'ancienne head regarde vers new (à sa gauche) */
	*head = new; /* new devient la nouvelle head */
	return (new); /* retourne l'adresse du nouveau node */
}
