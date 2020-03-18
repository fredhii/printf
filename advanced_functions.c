#include "holberton.h"
/**
 * p_binary - Prints
 * @buffer: Buffer to fill
 * @freya: Arguments.
 * @move: Buffer position.
 * Return: none.
 */
void p_binary(char *buffer, va_list freya, int *move)
{
	unsigned int num = va_arg(freya, int), i;
	char *a = _utoa(num, 2);

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
 * p_un_int - Prints
 * @buffer: Buffer to fill
 * @freya: Arguments.
 * @move: Buffer position.
 * Return: none.
 */
void p_un_int(char *buffer, va_list freya, int *move)
{
	unsigned int num = va_arg(freya, unsigned int), i;
	char *a = _utoa(num, 10);

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
 * p_hex - Prints
 * @buffer: Buffer to fill
 * @freya: Arguments.
 * @move: Buffer position.
 * Return: none.
 */
void p_hex(char *buffer, va_list freya, int *move)
{
	int num = va_arg(freya, int), i;
	char *a = _itoa(num, 16);

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
 * p_hex2 - Prints
 * @buffer: Buffer to fill
 * @freya: Arguments.
 * @move: Buffer position.
 * Return: none.
 */
void p_hex2(char *buffer, va_list freya, int *move)
{
	int num = va_arg(freya, int), i;
	char *a = _upper_itoa(num, 16);

	if (a == NULL)
		return;
	for (i = 0; a[i]; i++)
	{
		buffer[*move] = a[i];
		*move += 1;
	}
	free(a);
}
