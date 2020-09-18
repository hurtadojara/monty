#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct var_global global_t;

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
