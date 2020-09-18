#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct var_global global_t;


void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;
	(void) line_number;

	if (stack == NULL || *stack == NULL)
		e_handler2(5);
	tmp = *stack;
	*stack = (*stack)->next;
	if (tmp->n != 1)
	{
	if ((*stack)->next == NULL)
		free(tmp);
	}
	if (*stack != NULL)
		(*stack)->prev = NULL;
}
