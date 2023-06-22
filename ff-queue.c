#include "monty.h"

/**
 * queue - Adds a node to the queue.
 * @new_node: Pointer to the new node.
 * @n_line: Interger representing the line number of of the opcode.
 */
void queue(stack_t **new_node, unsigned int n_line)
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
	while (tmp->next != NULL)
		tmp = tmp->next;

	tmp->next = *new_node;
	(*new_node)->prev = tmp;
}
