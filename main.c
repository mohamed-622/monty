#include "monty.h"
stack_t *head = NULL;

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line argument strings
 *
 * Return: always 0. 
 */
int main(int argc, char **argv)
{
	if (argc != 2)
		error_salida(1);
	open_file(argv[1]);
	free_node();
	return (0);
}
