#include "holberton.h"
/**
 * _strlen - measure string length.
 * @str: value to size.
 * Return: string length.
 */
int _strlen(char *str)
{
	int size;

	for (size = 0; str[size]; size++)
		;
	return (size);
}
/**
 * print_all - produces output according to a format.
 * @buffer: array that contain all the information printed.
 **/
void print_all(char *buffer, int *move)
{
	write(1, buffer, *move);
}
