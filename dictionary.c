#include "holberton.h"
/**
 * dictionary - Prints
 * Return: Always 0.
 */
loki *dictionary()
{
	loki *dict = malloc(sizeof(loki) * 12);

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
	dict[5].type = 'b';
	dict[5].fun = p_binary;
	dict[6].type = 'u';
	dict[6].fun = p_un_int;
	dict[7].type = 'x';
	dict[7].fun = p_hex;
	dict[8].type = 'r';
	dict[8].fun = p_rev;
	dict[9].type = 'R';
	dict[9].fun = p_rot13;
	dict[10].type = 'p';
	dict[10].fun = p_address;
	dict[11].type = '\0';
	dict[11].fun = NULL;

	return (dict);
}
