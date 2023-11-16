#include "main.h"
/*
 * @_printf-writes a character called f to stdout
 * @c: The character being printed
 * Return: Succes 1
 * On error, -1 is returned, and erno is set accordingly
 */
int _printf(char f)
{
	return (write(1, &f, 1));
}
