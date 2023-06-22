#include "monty.h"
/**
 * sub - Substrac the top two elements of the stack.
 * @stack: Pointer to a pointer pointing to top node of the stack.
 * @n_line: Interger representing the line number of of the opcode.
 */
void sub(stack_t **stack, unsigned int n_line)
{
	int sub;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
		error_salida2(8, n_line, "sub");

	(*stack) = (*stack)->next;
	sub = (*stack)->n - (*stack)->prev->n;
	(*stack)->n = sub;
	free((*stack)->prev);
	(*stack)->prev = NULL;
}
