#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: number of argarguments
 * @argv: array containing arguments passed in a program
 * Return: nothing
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
