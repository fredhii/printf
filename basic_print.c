#include "holberton.h"

/**
 * p_char - Prints
 * @buffer: Buffer to fill
 * @freya: Arguments.
 * Return: Always 0.
 */
char *p_char(char *buffer, va_list freya, int *move)
{
	buffer[*move] = (char)va_arg(freya, int);
	*move += 1;

	return (buffer);
}

/**
 * p_string - Prints I am a string !
 * @buffer: Buffer to fill
 * @freya: Arguments.
 * Return: Always 0.
 */
char *p_string(char *buffer, va_list freya, int *move)
{
	int a = 0;
	char *f = va_arg(freya, char*);

	if (!f)
		f = "(null)";
	while (f[a])
	{
		buffer[*move] = f[a];
		*move += 1, a++;
	}
	return (buffer);
}

/**
 * p_prcnt - Prints
 * @buffer: Buffer to fill
 * @freya: Arguments.
 * Return: Always 0.
 */
char *p_prcnt(char *buffer, int *move)
{
	buffer[*move] = '%';
	*move += 1;

	return (buffer);
}
