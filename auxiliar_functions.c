#include "holberton.h"
/**
 * _strlen - measure string length.
 * @str: value to size.
 * Return: string length.
 */
int _strlen(char *str)
{
	int size;

	for (size = 0; str[size]; size++)
		;
	return (size);
}
/**
 * print_all - produces output according to a format.
 * @buffer: Array t print.
 * @move: Buffer size
 **/
void print_all(char *buffer, int *move)
{
	buffer[*move] = '\0';
	write(1, buffer, *move);
}

/**
 * _reverse - reverse the string.
 * @str: character.
 **/
void _reverse(char *str)
{
	int start, end;
	char temp;

	end = _strlen(str);
	end--;

	for (start = 0; start < end ; start++)
	{
		temp = *(str + start);
		*(str + start) = *(str + end);
		*(str + end--) = temp;
	}
}

/**
 * _itoa - Change int to base format.
 * @num: Number to convert
 * @base: Base format
 * Return: pointer to new string
 **/
char *_itoa(int num, int base)
{
	int i = 0, isNeg = 0;
	char *str;

	str = malloc(100);
	if (!str)
		return (NULL);
	if (num == 0)
	{
		str[i++] = '0';
		str[i] = '\0';
		return (str);
	}
	if (num < 0 && base == 10)
	{
		isNeg = 1;
		num *= -1;
	}
	while (num != 0)
	{
		int rem = num % base;

		str[i++] = (rem > 9) ? (rem - 10) + 'a' : rem + '0';
		num = num / base;
	}
	if (isNeg == 1)
		str[i++] = '-';
	str[i] = '\0';
	_reverse(str);
	return (str);
}
