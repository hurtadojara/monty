#include "monty.h"
/**
 * nop - Do nothing
 * @stack: The stack
 * @line_number: The line number
 */
struct var_global global_t;
void nop(stack_t **stack, unsigned int line_number)
{
	(void) stack;
	(void) line_number;
}