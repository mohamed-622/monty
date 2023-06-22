#include <stdio.h>
#include "monty.h"
#include <string.h>

/**
 * push - Pushes an element to the stack
 * @stack: Double pointer to the top of the stack
 * @line_number: Line number being executed from the Monty file
 */
void push(stack_t **stack, unsigned int line_number)
{
	char *argument = strtok(NULL, " \t\n");
	int value;
	stack_t *new_node;

	if (argument == NULL || !is_valid_integer(argument))
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

	value = atoi(argument);

	new_node = malloc(sizeof(stack_t));

	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new_node->n = value;
	new_node->prev = NULL;
	new_node->next = *stack;

	if (*stack != NULL)
		(*stack)->prev = new_node;
	*stack = new_node;
}
