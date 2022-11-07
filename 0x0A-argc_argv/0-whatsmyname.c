#include <stdio.h>

/**
 * main - prints the name of a program, followed by a new line
 * @argc: number of arguments
 * @argv: array containing the number of arguments passed in the program
 * Return: nothing
 */

int main(int argc, char* argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return(0);
}
