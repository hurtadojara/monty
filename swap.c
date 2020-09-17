#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
extern struct var_global global_t;

void swap(stack_t **stack, unsigned int line_number)
{
	int temp;
	if (*stack && (*stack)->next)
	{
		 temp = (*stack)->n;
		(*stack)->n = (*stack)->next->n;
		(*stack)->next->n = temp;
	}
	else
	{
		printf("error: %d", line_number);
	}
}