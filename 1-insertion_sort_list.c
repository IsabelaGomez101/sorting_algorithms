#include "sort.h"

/**
 * insertion_sort_list - function that sorts a doubly linked list of
 * integers in ascending order using the Insertion sort algorithm
 * @list: doubly linked list.
 * Return: void.
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *temp = *list;
	listint_t *current = *list;
	listint_t *aux;

	if (list == NULL)
		return;
	current = current->next; /*starts with the second node in the list*/
	while (current != NULL) /*loop doubly linked list*/
	{
		temp = current; /*copy current node*/
		while (temp->prev != NULL && temp->n < temp->prev->n)
		/*loop stops when it finds a greater n element*/
		{
			if (temp->next != NULL)
			temp->next->prev = temp->prev;
			if (temp->prev->prev != NULL)
			temp->prev->prev->next = temp;
			else
			*list = temp;
			/*swap nodes*/
			aux = temp->prev->prev;
			temp->prev->next = temp->next;
			temp->next = temp->prev;
			temp->prev->prev = temp;
			temp->prev = aux;
			print_list(*list);
		}
	    current = current->next;
	}
}
