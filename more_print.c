#include "holberton.h"
/**
 * p_rev - Reverse a string into buffer
 * @buffer: Buffer to fill
 * @freya: Arguments.
 * @move: Buffer position.
 * Return: none.
 */
void p_rev(char *buffer, va_list freya, int *move)
{
	int i, e;
	char *f, *str;

	f = va_arg(freya, char*);
	if (!f)
		return;
	e = _strlen(f);
	str = malloc(e * sizeof(char));
	if (!str)
		return;
	for (i = 0; i < e; i++)
		str[i] = f[i];
	_reverse(str);
	for (i = 0; str[i]; i++)
	{
		buffer[*move] = str[i];
		*move += 1;
	}
	free(str);
}
/**
 * p_rot13 - Encrypts in rot13
 * @buffer: Buffer to fill
 * @freya: Arguments.
 * @move: Buffer position.
 * Return: none.
 */
void p_rot13(char *buffer, va_list freya, int *move)
{
	int i, j;
	char *f;
	char dict[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char enco[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	f = va_arg(freya, char*);
	if (!f)
		return;
	for (i = 0; f[i]; i++)
	{
		for (j = 0; dict[j]; j++)
		{
			if (f[i] == dict[j])
			{
				buffer[*move] = enco[j];
				*move += 1;
				break;
			}
			if (!dict[j + 1])
			{
				buffer[*move] = f[i];
				*move += 1;
				break;
			}
		}
	}
}
/**
 * p_address - Address into buffer
 * @buffer: Buffer to fill
 * @freya: Arguments.
 * @move: Buffer position.
 * Return: none.
 */
void p_address(char *buffer, va_list freya, int *move)
{
	int i, j;
	unsigned long int address = 0, aux = 0;
	char null[6] = "(nil)", *temp_addr;

	address = (unsigned long int)va_arg(freya, void*);
	if (address == 0)
	{
		for (i = 0; i < 5; i++)
		{
			buffer[*move] = null[i];
			*move += 1;
		}
		return;
	}
	aux = address;
	while (aux) /* Count iterations */
	{
		aux /= 16;
		i++;
	}
	temp_addr = malloc(sizeof(char) * (i + 3));
	if (!temp_addr)
		return;
	if (temp_addr)
	{
		i += 1;
		while (address)
		{
			temp_addr[i] = address % 16 < 10 ? address % 16 + '0' :
				address % 16 + 'W';
			address /= 16, i--;
		}
	}
	temp_addr[i] = 'x', temp_addr[--i] = '0';
	for (j = 0; temp_addr[j]; j++)
		buffer[*move] = temp_addr[j], *move += 1;
	free(temp_addr);
}
/**
 * p_String - Doesn't print special characters
 * Description: Do not print 0 < ASCII value < 32 or >= 127
 * it prints \x followed by ASCII value
 * @buffer: Buffer to fill
 * @freya: Arguments.
 * @move: Buffer position.
 * Return: none.
 */
void p_String(char *buffer, va_list freya, int *move)
{
	int i, j;
	unsigned long int address = 0, aux = 0;
	char null[6] = "(nil)", *temp_addr;

	address = (unsigned long int)va_arg(freya, void*);
	if (address == 0)
	{
		for (i = 0; i < 5; i++)
		{
			buffer[*move] = null[i];
			*move += 1;
		}
		return;
	}
	aux = address;
	while (aux) /* Count iterations */
	{
		aux /= 16;
		i++;
	}
	temp_addr = malloc(sizeof(char) * (i + 3));
	if (!temp_addr)
		return;
	if (temp_addr)
	{
		i += 1;
		while (address)
		{
			temp_addr[i] = address % 16 < 10 ? address % 16 + '0' :
				address % 16 + 'W';
			address /= 16, i--;
		}
	}
	temp_addr[i] = 'x', temp_addr[--i] = '0';
	for (j = 0; temp_addr[j]; j++)
		buffer[*move] = temp_addr[j], *move += 1;
	free(temp_addr);
}
