#include "main.h"
/**
 * print_exc_string - print exclusuives string
 * @val: parameter
 *
 * Return: integer
 */

int print_exc_string(va_list val)
{
	char *d;
	int i, length = 0;
	int value;

	d = va_arg(val, char *);
	if (d == NULL)
		d = "(null)";
	for (i = 0; d[i] != '\0'; i++)
	{
		if (d[i] < 32 || d[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			length = length + 2;
			value = d[i];
			if (value < 16)
			{
				_putchar('0');
				length++;
			}
			length = length + print_HEX_extra(value);
		}
		else
		{
			_putchar(d[i]);
			length++;
		}
	}
	return (length);
}
