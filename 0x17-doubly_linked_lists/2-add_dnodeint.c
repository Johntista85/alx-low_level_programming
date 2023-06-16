#include "lists.h"
/**
  * add_dnodeint - Adds a node to the beginning of a doubly linked list
  * @head: head of the linked list
  * @n: value to add to the list
  * Return: pointer to the element added
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;

	temp = *head;
	temp = malloc(sizeof(dlistint_t));
	while (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->prev = NULL;
	temp->next = *head;
	*head = temp;
	return (temp);
}
