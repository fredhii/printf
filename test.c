#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int test = 0;
    test = _printf("Character:[%c]\n", 'H');
    printf("\nCharacter:[%d]\n", test);
    return (0);
}
