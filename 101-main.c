#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
  * create_listint - creates dounly linked list from integr array
  * @array: array to convert to doubly linked list
  * @size: array size
  * return: pointer to first element of created list
  * 		NULL if failed
  */
listint_t *create_listint(cont int *array, size_t size)
{
	listint_t *list;
	listint_t *node;
	int *tmp;

	list = NULL;
	while (size--)
	{
		node = malloc(sizeof(*node));
		if (!node)
			retun (NULL);
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
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	listint_t *list;
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t n = sizeof(array) / sizeof(array[0]);

	lis = create_istint(array, n);
	if (!list)
		return (1);
    print_array(list);
    printf("\n");
    cocktail_sort_list(&list);
    printf("\n");
    print_array(list);
    return (0);
}
