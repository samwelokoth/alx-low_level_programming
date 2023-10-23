
#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 *Description:Prints all the elements 
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
 size_t num = 0;

 while (h)
 {
 printf("%d\n", h->n);
 num++;
 h = h->next;
 }

 return (num);
}

