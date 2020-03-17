#include "holberton.h"
/**
 * dictionary - Prints
 * Return: Always 0.
 */
loki *dictionary()
{
	loki *dict = malloc(sizeof(loki) * 6);

	if (!dict)
		return (NULL);
	dict[0].type = 'c';
	dict[0].fun = p_char;
	dict[1].type = 's';
	dict[1].fun = p_string;
	dict[2].type = '%';
	dict[2].fun = p_prcnt;
	dict[3].type = 'd';
	dict[3].fun = p_doub;
	dict[4].type = 'i';
	dict[4].fun = p_int;
	dict[5].type = '\0';
	dict[5].fun = NULL;

	return (dict);
}
