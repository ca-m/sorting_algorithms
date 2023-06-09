#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
  * create_listint - creates doubly linked list from array of integers
  * @array: array to convert to doubly linked list
  * @size: size of array
  * return: pointer to firt element of created list
  * 		NULL on failure
  */
listint_t *create_listint(const int *array, size_t size)
{
	listint_t *ist;
	listint_t *node;
	int *tmp;

	list = NULL;
	while (size--)
	{
		node = malloc(sizeof(*node));
		if (!node)
			return (NULL);
		tmp = (int *)&node->n;
		*tmp = array[size];
		node->next = list;
		node->prev = NULL;
		list = node;
		if (list->next)
			list->next->prev = list;
	}
	return (list);
}

/**
  * main - entry point
  * return: always 0
  */
int main(void)
{
	listint_t *list;
	int array[] = {19,48, 99, 71, 13, 52, 96, 73, 86, 7};
	size_t n = sizeof(array) / sizeof(array[0]);

	list = create_listint(array, n);
	if (!list)
		return (1);
	print_list(list);
	printf("\n");
	insertion_sort_list(&list);
	printf("\n");
	print_list(list);
	return (0);
}
