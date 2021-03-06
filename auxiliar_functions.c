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
char *_itoa(long int num, int base)
{
	long int i = 0, isNeg = 0;
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
/**
 * _utoa - Change int to base format.
 * @num: Number to convert
 * @base: Base format
 * Return: pointer to new string
 **/
char *_utoa(unsigned int num, int base)
{
	unsigned int i = 0;
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
	if (num == 1)
	{
		str[i++] = '1';
		str[i] = '\0';
		return (str);
	}
	while (num != 0)
	{
		int rem = num % base;

		str[i++] = (rem > 9) ? (rem - 10) + 'a' : rem + '0';
		num = num / base;
	}
	str[i] = '\0';
	_reverse(str);
	return (str);
}
/**
 * _upper_itoa - Change int to base format.
 * @num: Number to convert
 * @base: Base format
 * Return: pointer to new string
 **/
char *_upper_itoa(long int num, int base)
{
	long int i = 0;
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
	while (num != 0)
	{
		int rem = num % base;

		str[i++] = (rem < 10) ? rem + '0' : rem + '7';
		num = num / base;
	}
	str[i] = '\0';
	_reverse(str);
	return (str);
}
