#include "monty.h"

/**
 * main - Entry pointcode
 * @argc: number of arguments
 * @argv: pointer to array of strings of arguments
 * Return: 0 on success, -1 on failure
 */
int main(int argc, char *argv[])
{
	FILE *fd;
	stack_t *stack = NULL;
	char *line = NULL;
	char *opcode, *n;
	unsigned int line_number;
	size_t l = 0;
	ssize_t read;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	fd = fopen(argv[1], "r");
	if (fd == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	line_number = 0;
	while ((read = getline(&line, &l, fd)) != -1)
	{
		line_number++;
		opcode = strtok(line, DELIM);
		if (opcode == NULL || strncmp(opcode, " ", 1) == 0)
			continue;
		if (strcmp(opcode, "push") == 0)
		{
			n = strtok(NULL, DELIM);
			push(&stack, line_number, n);
		}
		else
			opcode_fun(opcode, &stack, line_number);
	}
	_frees(stack, line, fd);
	return (EXIT_SUCCESS);
}
