#include <stdio.h>
#include "holberton.h"
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int test = 0, test2 = 0;
	printf("OK\n");
	test = _printf("%% %c %s\n", 'H', "Works!!");
   	printf("OK2\n");
        test2 = printf("%% %c %s\n", 'H', "Works!!");
	printf("OK3\n");
	printf("%i == %i\n", test, test2);
	return (0);
}
