#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
        char s1[98] = "Hello_";
    char s2[] = "WORLD";
    char *p;

    p = _strcat(s1, s2);
    printf("%s\n", p);
    return (0);
}
