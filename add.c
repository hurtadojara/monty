#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
extern struct var_global global_t;

void add(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;

	if (*stack && (*stack)->next)
	{
		(*stack)->next->n += (*stack)->n;
		tmp = *stack;
		*stack = (*stack)->next;
		(*stack)->prev = NULL;
		free(tmp);
	}
	else
	{
		printf("error: %d", line_number);
	}
}