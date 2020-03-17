#include "holberton.h"
#include <stdio.h>
/**
 * _printf - Prints
 * @format: Type of arguments to be printed
 * Return: Always 0.
 */
int _printf(const char *format, ...)
{
	int i, j, size = 0, *move = &size;
	char *buffer = hand_buff();
	loki *dc = dictionary();
	va_list freya;

	va_start(freya, format);
	if (!buffer || !dc || !format)
		return (free(buffer), free(dc), -1);
	for (i = 0; format && format[i]; i++)
	{
		if (format[i] != '%')
			buffer[size++] = format[i];
		else
		{
			i++;
			if (format[i] == '\0')
				break;
			for (j = 0; dc[j].type && format[i]; j++)
			{
				if (format[i] == dc[j].type)
				{
					buffer = dc[j].fun(buffer, freya, move);
					break;
				}
				else if (!dc[j + 1].type && (format[i] == '\0'
					|| format[i] == '\n'))
					return (free(buffer), free(dc), -1);
				else if (!dc[j + 1].type)
					buffer[size++] = '%', i--;
			}
		}
	}
	print_all(buffer, move);
	return (va_end(freya), free(dc), free(buffer), size);
}
