#include "holberton.h"
/**
 * p_char - Prints
 * @buffer: Buffer to fill
 * @freya: Arguments.
 * @move: Buffer position.
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
 * @move: Buffer position.
 * Return: Always 0.
 */
char *p_string(char *buffer, va_list freya, int *move)
{
	int a = 0;
	char *f;

	if (va_arg(freya, char*))
	{
		return(buffer);
	}
	f = va_arg(freya, char*);
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
 * @freya: Arguments (not used).
 * @move: Buffer position.
 * Return: Always 0.
 */
char *p_prcnt(char *buffer, __attribute__((unused)) va_list freya, int *move)
{
	buffer[*move] = '%';
	*move += 1;

	return (buffer);
}

/**
 * p_doub - Prints
 * @buffer: Buffer to fill
 * @freya: Arguments (not used).
 * @move: Buffer position.
 * Return: Always 0.
 */
char *p_doub(char *buffer, va_list freya, int *move)
{
	int num = va_arg(freya, int), i;
	char *a = _itoa(num, 10);

	if (a == NULL)
		return (NULL);
	for (i = 0; a[i]; i++)
	{
		buffer[*move] = a[i];
		*move += 1;
	}
	free(a);

	return (buffer);
}

/**
 * p_int - Prints
 * @buffer: Buffer to fill
 * @freya: Arguments (not used).
 * @move: Buffer position.
 * Return: Always 0.
 */
char *p_int(char *buffer, va_list freya, int *move)
{
	int num = va_arg(freya, int), i;
	char *a = _itoa(num, 10);

	if (a == NULL)
		return (NULL);
	for (i = 0; a[i]; i++)
	{
		buffer[*move] = a[i];
		*move += 1;
	}
	free(a);

	return (buffer);
}
