#include "monty.h"
/**
  * swap- swaps the top two elements of the stack.
  * @stack: pointer to stack
  * @line_number: line number of instruction
  * Return: void
  */
void swap(stack_t **stack, unsigned int line_number)
{
	int temp_a;
	int temp_b;

	if (s_len(stack) < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	temp_a = (*stack)->n;
	temp_b = (*stack)->next->n;
	(*stack)->n = temp_b;
	(*stack)->next->n = temp_a;
}
