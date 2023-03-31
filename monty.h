#ifndef MONTY_H
#define MONTY_H

/* Libraries */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


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
	struct stack_s *next;
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
void (*get_func(stack_t **stack, int l, char *code))(stack_t **, unsigned int);
void err(void);
void pushOp(stack_t **stack, unsigned int line_number, char *pushNum);
void free_stack(stack_t **stack);
/* opcodes */
void push(stack_t **stack, unsigned int line_number);
void pall(stack_t **stack, unsigned int line_number);
void pint(stack_t **stack, unsigned int line_number);
void pop(stack_t **stack, unsigned int line_number);
void swap(stack_t **stack, unsigned int line_number);
void add(stack_t **stack, unsigned int line_number);
void nop(stack_t **stack, unsigned int line_number);

/* --- GLOBAL VARIABLES --- */
extern FILE *file;

#endif
