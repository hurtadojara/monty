#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  * pall - function to prints all the values on the stack.
  * @stack: pointer to head.
  * @line_number: line number.
  */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = *stack;
	(void) line_number;

	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
}
