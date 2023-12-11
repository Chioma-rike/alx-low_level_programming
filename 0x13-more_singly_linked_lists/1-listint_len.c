#include "lists.h"
/**
 * listint_len - Returns the number of elements in a linked lists
 * @h: Linked list of type listint_t to travers
 * Return: Number of element in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t num;

	if (h == NULL)
		return (0);
	for (num = 0; h != NULL; num++)
	{
		h = h->next;
	}
	return (num);
}
