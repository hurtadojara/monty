#include "monty.h"
/**
  * add - adds top elements of the stack.
  * @stack: pointer to stack.
  * @line_number: line number.
  * Return: void.
  */
void add(stack_t **stack, unsigned int line_number)
{
	int a;
	int b;
	int result;

	if (s_len(stack) < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	a = (*stack)->n;
	b = (*stack)->next->n;
	result = a + b;
	pop(stack, line_number);
	(*stack)->n = result;
}
