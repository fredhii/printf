#include "holberton.h"
/**
 * dictionary - Prints
 * Return: Always 0.
 */
loki *dictionary()
{
	loki *dict = malloc(sizeof(loki) * 1);

	dict[0].type = 'c';
	dict[0].functions = p_char;

	return (dict);
}
