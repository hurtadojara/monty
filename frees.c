#include "monty.h"
/**
 * stk_free - free stack_t stack.
 * @stack: stack.
 * Return: void
 */
void stk_free(stack_t **stack)
{
	stack_t *tmp;

	while (*stack != NULL)
	{
		tmp = *stack;
		*stack = (*stack)->next;
		free(tmp);
	}
}
/**
 * _frees - free all.
 * @stack: stack.
 * @line: free from getline.
 * @fd: file descriptor.
 * Return: void
 */
void _frees(stack_t *stack, char *line, FILE *fd)
{
	if (stack != NULL)
		stk_free(&stack);

	free(line);
	fclose(fd);
}
