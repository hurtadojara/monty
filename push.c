#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct var_global global_t;
/**
  * push - function to add node.
  * @stack: pointer to head.
  * @line_number: line number.
  */
void push(stack_t **stack, unsigned int line_number)
{
	stack_t *new = NULL;
	int i = 0;
	(void)line_number;

	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		fprintf(stderr, "Error: malloc failed");
		eraser();
		free(new);
		free(global_t.linea);
		fclose(global_t.fd);
		exit(EXIT_FAILURE);
	}
	global_t.nn = new;
	while (global_t.strings[i] != NULL)
	{
		i++;
	}
	if (i < 2)
	{
		e_handler(3);
	}
	else
		if (global_t.strings[1][0] == '-')
			new->n = (atoi(global_t.strings[1]) * -1);
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
}
