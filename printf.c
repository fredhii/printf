#include "holberton.h"
#include <stdio.h>
/**
 * _printf - Prints
 * @format: Type of arguments to be printed
 * Return: Always 0.
 */
int _printf(const char *format, ...)
{
	va_list freya;
	char *buffer;
	int i, j, size = 0, *move = &size;
	loki *dc = dictionary();

	if (!format)
		return (-1);
	buffer = malloc(2048);
	if (!buffer)
		return (-1);
	va_start(freya, format);
	for (i = 0; format && format[i]; i++)
	{
		if (format[i] != '%')
			buffer[size++] = format[i];
		else
		{
			i++;
			for (j = 0; dc[j].type; j++)
			{
				if (format[i] == dc[j].type)
				{
					buffer = dc[j].fun(buffer, freya, move);
					break;
				}
				else if (!dc[j + 1].type)
					return (free(buffer), free(dc), -1);
			}
		}
	}
	print_all(buffer, move), free(dc), free(buffer), va_end(freya);
	return (size);
}
