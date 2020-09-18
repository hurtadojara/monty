#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct var_global global_t;
/**
  * add - function to adds.
  * @stack: pointer to head.
  * @line_number: line number.
  */
void add(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;
	(void)line_number;

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
		e_handler2(6);
	}
}
