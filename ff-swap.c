#include "monty.h"

/**
 * swap - Swap element 1 for element 2 of the stack.
 * @stack: Points to the top node of the stack.
 * @n_line: Opcode line number.
 */
void swap(stack_t **stack, unsigned int n_line)
{
	stack_t *tmp;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
		error_salida2(8, n_line, "swap");

	tmp = (*stack)->next;
	(*stack)->next = tmp->next;

	if (tmp->next != NULL)
		tmp->next->prev = *stack;

	tmp->next = *stack;
	(*stack)->prev = tmp;
	tmp->prev = NULL;
	*stack = tmp;
}
