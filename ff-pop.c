#include "monty.h"

/**
 * pop - Adds a node to the stack.
 * @stack: Pointer to a pointer pointing to top node of the stack.
 * @n_line: Interger representing the line number of of the opcode.
 */
void pop(stack_t **stack, unsigned int n_line)
{
	stack_t *tmp;

	if (stack == NULL || *stack == NULL)
		error_salida2(7, n_line);

	tmp = *stack;
	*stack = tmp->next;
	if (*stack != NULL)
		(*stack)->prev = NULL;
	free(tmp);
}
