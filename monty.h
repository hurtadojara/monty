#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
		int n;
		struct stack_s *prev;
		struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
		char *opcode;
		void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct var_global - global struct.
 * @strings: comand and element.
 * @nodo: pointer to head.
 * @n_linea: num of line.
 * @linea: line of getlione.
 * @fd: file descriptor.
 */
struct var_global
{
		char **strings;
		stack_t *nodo;
		unsigned int n_linea;
		char *linea;
		FILE *fd;
};
extern struct var_global global_t;

void pall(stack_t **, unsigned int);
void push(stack_t **, unsigned int);
void pop(stack_t **, unsigned int);
void pint(stack_t **, unsigned int);
void swap(stack_t **, unsigned int);
void add(stack_t **, unsigned int);
void nop(stack_t **, unsigned int);
void (*unificador())(stack_t **, unsigned int);
void getlinetok(FILE *);
void e_handler(int error);
void eraser(void);
void e_handler2(int error);

#endif
