#include "monty.h"
/**
 * s_len - returns length of stack
 * @stack: pointer to head of stack
 * Return: length
 */
size_t s_len(stack_t **stack)
{
	stack_t *current;
	unsigned int i;

	current = *stack;
	i = 0;
	while (current != NULL)
	{
		current = current->next;
		i++;
	}
	return (i);
}
