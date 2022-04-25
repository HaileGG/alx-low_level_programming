/*
 * File: 0-print_listint.c
 * Auth: Haile G
 */

#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: A pointer to the head of the list_t list.
 *
 * Return: The number of nodes in the list_t list.
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *nodes = h;
	size_t count = 0;

	if (nodes != NULL)
	{
		while (nodes)
		{
			printf("%d\n", nodes->n);
			count++;
			nodes = nodes->next;
		}
	}
	return (count);
}
