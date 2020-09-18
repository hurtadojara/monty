#include "monty.h"
struct var_global global_t;
/**
  * unificador - function to find opcode.
  * Return: pointer to function.
  */
void (*unificador(void))(stack_t **, unsigned int)
{
	instruction_t functions[] = {
		{"pall", pall},
		{"push", push},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add},
		{"nop", nop},
		{NULL, NULL}
	};
	int i = 0;
	int cmp = 0;

	while (i < 8)
	{
		if (!global_t.strings[0])
			break;
		cmp = strcmp(functions[i].opcode, global_t.strings[0]);
		if (cmp == 0)
		{
		return (functions[i].f);
		}
		i++;
		if (i == 7)
			break;
	}
	if (cmp != 0)
	{
		e_handler(2);
	}
	return (functions[6].f);
}
