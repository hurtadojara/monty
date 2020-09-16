#include "header.h"
#include "header.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
extern struct var_global global_t;

void push(stack_t **stack, unsigned int line_number)
{
    stack_t *new;
	stack_t *tmp;
    (void)stack;
    (void)line_number;

    if (!global_t.strings[1])
        printf("error");
    new = malloc(sizeof(stack_t));
	if (new == NULL)
		printf("error");
    new->n = atoi(global_t.strings[1]);
    new->next = NULL;
    if (*stack == NULL)
	{
		new->prev = NULL;
		*stack = new;
	}
    else
	{
		tmp = *stack;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new;
		new->prev = tmp;
	}
}
