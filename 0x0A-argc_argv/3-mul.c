#include <stdio.h>

/**
 * main - multiplies two numbers
 * @argc: prints all arguments passed in a program
 * @argv: an array containing all arguments passed in a program
 * Return : 1 if not program does not receive 2 arguments
 */

int main (int argc, char *argv[])
{
	int product = 0;
	if (argc <= 2)
	{
		printf("Error\n");
		return(1);
	}
	else
	{
		product = atoi(argv[1]) *atoi(argv[2]);
		printf("%d\n", product);
	}
	return (0);
}
