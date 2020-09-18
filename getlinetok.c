#include "monty.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct var_global global_t;

void getlinetok(FILE *fd)
{
	char *token, *line = NULL;
    size_t line_size = 0;
	int read = 0, arg = 0;
    void (*operation)(stack_t **, unsigned int);

	read = getline(&line, &line_size, fd);
	global_t.linea = line;
	while (read > 0)
	{
	global_t.strings = malloc(sizeof(char *) * 100);
		if (!global_t.strings)
		{
			fprintf(stderr, "Error: malloc failed");
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
		free(global_t.linea);
		read = getline(&line, &line_size, fd);
	}
}