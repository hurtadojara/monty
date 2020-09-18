#include "monty.h"
/**
 *pint- prints the date at the top of the stack, follow new line.
 *@stack: pointer to stack
 *@line_number: line number of instruction
 *Return: void
 */
void pint(stack_t **stack, unsigned int line_number)
{
	int date;

	if (stack == NULL || *stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	date = (*stack)->n;
	printf("%d\n", date);
}
