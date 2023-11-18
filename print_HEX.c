#include "main.h"

/**
 * @print_HEX - prints an hexadecimal number
 * @val: arguments
 * Return: counter
 *
*/
int print_HEX(va_list val)
{
	int b;
	int *array;
	int counter = 0;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int tem = num;

	while (num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(int));

	for (b = 0; b < counter; b++)
	{
		array[b] = tem % 16;
		tem /= 16;
	}
	for (b = counter - 1; b >= 0; b--)
	{
		if (array[b] > 9)
			array[b] = array[b] + 7;
		_putchar(array[b] + '0');
	}
	free(array);
	return (counter);
}
