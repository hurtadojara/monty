#include "header.h"
#include "header.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
extern struct var_global global_t;

void pint(stack_t **stack, unsigned int line_number)
{
    stack_t *tmp = *stack;

	if (tmp == NULL)
	{
		printf("error");
        printf("%d", line_number);
	}
	while (tmp != NULL)
	{
		if (tmp->next == NULL)
			break;
		tmp = tmp->next;
	}
	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->prev;
	}
}