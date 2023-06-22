#include "monty.h"

/**
 * push- Adds a node to the stack.
 * @new_node: Pointer to the new node.
 * @n_line: Interger representing the line number of of the opcode.
 */
void push(stack_t **new_node, unsigned int n_line)
{
	stack_t *tmp;
	(void) n_line;

	if (new_node == NULL || *new_node == NULL)
		exit(EXIT_FAILURE);
	if (head == NULL)
	{
		head = *new_node;
		return;
	}

	tmp = head;
	tmp->prev = NULL;
	head = *new_node;
	head->next = tmp;
	tmp->prev = head;

}
