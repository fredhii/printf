#include "holberton.h"
/**
 * dictionary - Prints
 * Return: Always 0.
 */
loki *dictionary()
{
	loki *dict = malloc(sizeof(loki) * 3);

	dict[0].type = 'c';
	dict[0].fun = p_char;
	dict[1].type = 's';
	dict[1].fun = p_string;
	dict[2].type = '%';
	dict[2].fun = p_prcnt;

	return (dict);
}
