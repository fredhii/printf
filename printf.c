#include "holberton.h"
/**
 * _printf - Prints
 * @format: Type of arguments to be printed
 * Return: Always 0.
 */
int _printf(const char *format, ...)
{
	va_list freya;
	int i = 0, j, buffer_size = 0;
	char *buffer;
	loki *dc = dictionary();

	buffer = malloc(1024);
	if (!buffer)
		return (-1);
	va_start(freya, format);

	while (format && format[i])
	{
		if (format[i] == '%')
		{
			j = 0;
			while (dc[j].type)
			{
				if (format[i + 1] == dc[j].type)
				{
					buffer = dc[j].functions(buffer, freya);
					i++;
				}
				j++;
			}
			i++;
		}
		else
		{
			buffer_size = _strlen(buffer);
			buffer[buffer_size] = format[i];
			i++;
		}
	}
	print_all(buffer, buffer_size);
	free(buffer);
	free(dc);
	va_end(freya);
	return (buffer_size);
}
