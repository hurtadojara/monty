#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
extern struct var_global global_t;

void push(stack_t **stack, unsigned int line_number)
{
	stack_t *new = NULL;
	(void)line_number;
	
	new = malloc(sizeof(stack_t));

	if (new == NULL)
		printf("error");
    if (global_t.strings[1] == NULL)
        printf("error");

    new->n = atoi(global_t.strings[1]);
    if (*stack == NULL)
	{
		new->next = NULL;
		new->prev = NULL;
		*stack = new;
	}
    else
	{
		new->next = *stack;
		new->prev = (*stack)->prev;
		(*stack)->prev = new;
		*stack = new;
	}
	return;
}
