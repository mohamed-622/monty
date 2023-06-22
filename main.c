#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

#define MAX_LINE_LENGTH 1000

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line argument strings
 *
 * Return: 0 on success, non-zero on failure
 */
int main(int argc, char *argv[])
{
	FILE *file;
	char line[MAX_LINE_LENGTH];
	size_t len = MAX_LINE_LENGTH;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	file = fopen(argv[1], "r");

	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	while (fgets(line, len, file) != NULL)
	{
		/* TODO: Parse the line and execute the opcode functions */
	}

	fclose(file);

	return (0);
}

