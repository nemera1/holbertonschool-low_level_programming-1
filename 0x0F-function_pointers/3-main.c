#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - check the code for Holberton School students.
 * @argc: amount of args
 * @argv: arguments
 * Return: 1 if an error occurred, 0 otherwise
 */
int main(int argc, char *argv[])
{
	int o1, o2, i, j, k;

	op_t oper;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	i = strlen(argv[2]);
	j = strlen(argv[1]);
	k = strlen(argv[3]);

	if (i > 1 || j > 1 || k > 1)
	{
		printf("Error\n");
		exit(98);
	}

	o1 = atoi(argv[1]);
	o2 = atoi(argv[3]);
	oper.op = argv[2];
	oper.f = get_op_func(argv[2]);
	printf("%d\n", oper.f(o1, o2));
	return (0);
}
