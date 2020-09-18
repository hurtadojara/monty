#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct var_global global_t;


void swap(stack_t **stack, unsigned int line_number)
{
	int temp;
	(void) line_number;

	if (*stack && (*stack)->next)
	{
		 temp = (*stack)->n;
		(*stack)->n = (*stack)->next->n;
		(*stack)->next->n = temp;
	}
	else
	{
		e_handler(1);
	}
}