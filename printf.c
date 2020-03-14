#include "holberton.h"
#include <stdio.h>
/**
 * _printf - Prints
 * @format: Type of arguments to be printed
 * Return: Always 0.
 */
loki *dictionary()
{
	loki *dict = malloc(sizeof(loki) * 1);

	dict[0].type = 'c';
	dict[0].functions = p_char;

	return (dict);
}
/**
 * _printf - Prints
 * @format: Type of arguments to be printed
 * Return: Always 0.
 */
int _printf(const char *format, ...)
{
	va_list freya;
	int i = 0, j, buffer_size;
	char *buffer;
	loki *dic = dictionary();

	buffer = malloc(1024);
	if (!buffer)
		return (-1);
	va_start(freya, format);

	while (format && format[i])
	{
		j = 0;
		while (dic[j].type)
		{
			if (format[i - 1] == '%' && (format[i] == dic[j].type))
			{
				buffer = dic[j].functions(buffer, freya);
			}
			j++;
		}
		i++;
	}
	buffer_size = _strlen(buffer);
	write(1, buffer, buffer_size);
	free(buffer);
	free(dic);
	va_end(freya);
	return (buffer_size);
}
