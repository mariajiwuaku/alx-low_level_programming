#include <stdio.h>
#include "main.h"

/**
 * main - Prints the name of the program
 * @argc: Number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0
 */
int main(int argc __attribute__((unused)) , char *argv[])
{

	printf("%s\n", *argv);

	return (0);
}
