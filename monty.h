#ifndef MONTY_H
#define MONTY_H

/* Libraries */
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <unistd.h>
#include <ctype.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#define VALID 1

/* provided data structures */

/**
 * struct stack_s - doubly linked list repersentation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous elements of the stack or queue
 * @next: points to next element of the stack or queue
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	Struct stack_s *next;
} stack_t;

/**
 * struct instructions_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/* function prototypes */
void mon_push(stack_t **stack, unsigned int line_number);
void mon_pop(stack_t **stack, unsigned int line_number);
void mon_pall(stack_t **stack, unsigned int line_number);
void mon_pint(stack_t **stack, unsigned int line_number);
void mon_swap(stack_t **stack, unsigned int line_number);
void mon_add(stack_t **stack, unsigned int line_number);
void mon_nop(stack_t **stack, unsigned int line_number);

#endif
