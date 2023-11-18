#include "main.h"

/**
 * print_pointer - prints an hexadecimal number
 * @val: arguments
 * Return: counter
 */
int print_pointer(va_list val)
{
	void *p;
	char *s = "(nil)";
	long int x;
	int b;
	int p;

	p = va_arg(val, void*);
	if (p == NULL)
	{
		for (p = 0; s[p] != '\0'; p++)
		{
			_putchar(s[p]);
		}
		return (p);
	}

	x = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	b = print_hex_extra(x);
	return (b + 2);
}
