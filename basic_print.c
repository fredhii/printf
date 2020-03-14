#include "holberton.h"
#include <stdio.h>
/**
 * _strlen - measure string length.
 * @s: value to size.
 * Return: string length.
 */
int _strlen(char *str)
{
	int size = 0;

	if (!str)
		return (size);
	for (; str[size]; size++)
		;
	return (size);
}
/**
 * p_char - Prints
 * @buffer: Buffer to fill
 * @freya: Arguments.
 * Return: Always 0.
 */
char *p_char(char *buffer, va_list freya)
{
	int i;

	i = _strlen(buffer);
	buffer[i] = (char)va_arg(freya, int);

	return (buffer);
}
