#include "main.h"
/*
 * print_bin - prints binary number.
 * @val: parameter.
 * Return: integer
 *
*/
int print_bin(va_list val)
{
	int flag = 0;
	int cont = 0;
	int b, a = 1;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int p;

	for (b = 0; b < 32; b++)
	{
		p = ((a << (31 - b)) & num);
		if (p >> (31 - b))
			flag = 1;
		if (flag)
		{
			b = p >> (31 - b);
			_putchar(b + 48);
			cont++;
		}
	}
	if (cont == 0)
	{
		cont++;
		_putchar('0');
	}
	return (cont);
}

