#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: pointer to the pointer of the head of the list
 * @n: integer value to store in the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;     /* pointeur vers le nouveau node à créer */
	dlistint_t *current; /* pointeur pour parcourir la liste */

	new = malloc(sizeof(dlistint_t)); /* alloue la mémoire pour le node */
	if (new == NULL)      /* vérifie que malloc n'a pas échoué */
		return (NULL);
	new->n = n;           /* stocke la valeur dans le node */
	new->next = NULL;     /* il sera le dernier, personne après lui */
	new->prev = NULL;     /* temporaire, sera mis à jour après */
	if (*head == NULL)    /* si la liste est vide */
	{
		*head = new;      /* new devient directement la head */
		return (new);
	}
	current = *head;      /* on part de la tête pour parcourir */
	while (current->next != NULL) /* tant qu'on n'est pas au dernier node */
		current = current->next;  /* on avance au node suivant */
	current->next = new;  /* l'ancien dernier pointe vers new */
	new->prev = current;  /* new pointe en arrière vers l'ancien dernier */
	return (new);         /* retourne l'adresse du nouveau node */
}
