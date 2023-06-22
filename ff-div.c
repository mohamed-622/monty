#include "monty.h"

/**
 * divi - Division the top two elements of the stack.
 * @stack: Pointer to a pointer pointing to top node of the stack.
 * @n_line: Interger representing the line number of of the opcode.
 */
void divi(stack_t **stack, unsigned int n_line)
{
	int div;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
		error_salida2(8, n_line, "div");

	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", n_line);
		exit(EXIT_FAILURE);
	}
	(*stack) = (*stack)->next;
	div = (*stack)->n / (*stack)->prev->n;
	(*stack)->n = div;
	free((*stack)->prev);
	(*stack)->prev = NULL;
}
