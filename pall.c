#include "monty.h"
/**
 *pall- pushes an element to the stack.
 *@stack: pointer to stack
 *@line_number: line number of instruction
 *Return: void
 */
void pall(stack_t **stack, unsigned int __attribute__((unused))line_number)
{
	stack_t *tmp = *stack;

	if (stack == NULL || *stack == NULL)
		return;
	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
}
