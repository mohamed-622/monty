#include "monty.h"

/**
 * pint - Prints the top node of the stack.
 * @stack: Pointer to a pointer pointing to top node of the stack.
 * @n_line: Interger representing the line number of of the opcode.
 */
void pint(stack_t **stack, unsigned int n_line)
{
	if (stack == NULL || *stack == NULL)
		error_salida2(6, n_line);

	printf("%d\n", (*stack)->n);
}
