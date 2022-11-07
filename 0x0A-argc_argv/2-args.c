#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: print the number of arguments passed to it
 * @argv: array containing arguments passed in the program
 *
 * Return: nothing
 */

int main(int argc, char *argv[])

{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
