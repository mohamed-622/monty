#include "monty.h"
/**
 * add - Adds the top two elements of the stack.
 * @stack: Pointer to a pointer pointing to top node of the stack.
 * @n_line: Interger representing the line number of of the opcode.
 */
void add(stack_t **stack, unsigned int n_line)
{
	int sum;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
		error_salida2(8, n_line, "add");

	(*stack) = (*stack)->next;
	sum = (*stack)->n + (*stack)->prev->n;
	(*stack)->n = sum;
	free((*stack)->prev);
	(*stack)->prev = NULL;
}
