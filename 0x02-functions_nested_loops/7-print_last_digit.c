#include "holberton.h"
/**
 * print_last_digit - checks for alpha letters
 * Return: the last digit
 * @n: int to be checked
 */
int print_last_digit(int n)
{
	int d = n % 10;

	_putchar(48 + d);
	return (d);
}
