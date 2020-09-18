#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  * pint - function to prints the value at the top of the stack.
  * @stack: pointer to head.
  * @line_number: line number.
  */
void pint(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = *stack;
	(void) line_number;

	if (tmp == NULL)
	{
		e_handler(4);
	}
	printf("%d\n", tmp->n);
}
