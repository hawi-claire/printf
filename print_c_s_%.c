#include "main.h"

/**
 * printf_char - prints a character
 * @val: arguments
 * Return: 1
 */
int printf_char(va_list val)
{
	char str;
/*Extract the character from the va_list*/
	str = va_arg(val, int);
	_putchar(str);
	return (1);
}
