#include "monty.h"
/**
 * pall - Adds a node to the stack.
 * @stack: Pointer to a pointer pointing to top node of the stack.
 * @n_line: Interger representing the line number of of the opcode.
 */
void pall(stack_t **stack, unsigned int n_line)
{
	stack_t *tmp;

	(void) n_line;
	if (stack == NULL)
		exit(EXIT_FAILURE);
	tmp = *stack;
	while (tmp != NULL)
	{
		fprintf(stdout, "%d\n", tmp->n);
		tmp = tmp->next;
	}
}
