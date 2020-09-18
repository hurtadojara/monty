#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct var_global global_t;
/**
  * getlinetok - function to get line and toks.
  * @fd: file descriptor.
  */
void getlinetok(FILE *fd)
{
	char *token, *line = NULL;
	size_t line_size = 0;
	int real = 0, arg = 0;
	void (*operation)(stack_t **, unsigned int);

	real = getline(&line, &line_size, fd);
	line[real] = '\0';
	global_t.linea = line;
	while (real != -1)
	{
		global_t.strings = malloc(sizeof(char *) * 100);
		if (!global_t.strings)
		{
			fprintf(stderr, "Error: malloc failed\n");
			free(global_t.strings);
			fclose(fd);
			exit(EXIT_FAILURE);
		}
		token = strtok(line, " \n\t\r\a");
		for (; token != NULL; token = strtok(NULL, " \n\t\r\a"))
		{
			global_t.strings[arg] = strdup(token);
			arg++;
		}
		arg = 0;
		global_t.n_linea++;
		operation = unificador(global_t.strings, global_t.n_linea);
		operation(&global_t.nodo, global_t.n_linea);
		eraser();
		global_t.strings = NULL;
		real = getline(&line, &line_size, fd);
		line[real] = '\0';
	}
	free(global_t.nn);
}
