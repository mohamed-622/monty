#include "monty.h"

/**
 * nop - Does nothing.
 * @stack: Top of the stack.
 * @n_line: Current line number.
 */
void nop(stack_t **stack, unsigned int n_line)
{
	(void)*stack;
	(void)n_line;
}
