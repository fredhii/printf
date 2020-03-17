#include "holberton.h"
/**
 * p_char - Prints
 * @buffer: Buffer to fill
 * @freya: Arguments.
 * @move: Buffer position.
 * Return: none.
 */
void p_char(char *buffer, va_list freya, int *move)
{
	buffer[*move] = (char)va_arg(freya, int);
	*move += 1;
}

/**
 * p_string - Prints I am a string !
 * @buffer: Buffer to fill
 * @freya: Arguments.
 * @move: Buffer position.
 * Return: none.
 */
void p_string(char *buffer, va_list freya, int *move)
{
	int a = 0;
	char *f;

	f = va_arg(freya, char*);
	if (!f)
		f = "(null)";
	while (f[a])
	{
		buffer[*move] = f[a];
		*move += 1, a++;
	}
}
/**
 * p_prcnt - Prints
 * @buffer: Buffer to fill
 * @freya: Arguments (not used).
 * @move: Buffer position.
 * Return: none.
 */
void p_prcnt(char *buffer, __attribute__((unused)) va_list freya, int *move)
{
	buffer[*move] = '%';
	*move += 1;
}

/**
 * p_doub - Prints
 * @buffer: Buffer to fill
 * @freya: Arguments.
 * @move: Buffer position.
 * Return: none.
 */
void p_doub(char *buffer, va_list freya, int *move)
{
	int num = va_arg(freya, int), i;
	char *a = _itoa(num, 10);

	if (a == NULL)
		return;
	for (i = 0; a[i]; i++)
	{
		buffer[*move] = a[i];
		*move += 1;
	}
	free(a);
}

/**
 * p_int - Prints
 * @buffer: Buffer to fill
 * @freya: Arguments.
 * @move: Buffer position.
 * Return: none.
 */
void p_int(char *buffer, va_list freya, int *move)
{
	int num = va_arg(freya, int), i;
	char *a = _itoa(num, 10);

	if (a == NULL)
		return;
	for (i = 0; a[i]; i++)
	{
		buffer[*move] = a[i];
		*move += 1;
	}
	free(a);
}
