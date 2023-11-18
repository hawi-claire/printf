#include "main.h"
/**
 * print_hex - prints an hex num
 * @val:the arguments
 * Return: counter
 */
int print_hex(va_list val)
{
	int n;
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

	for (n = 0; n < counter; n++)
	{
		array[n] = tem % 16;
		tem /= 16;
	}
	for (n = counter - 1; n >= 0; n--)
	{
		if (array[n] > 9)
			array[n] = array[n] + 39;
		_putchar(array[n] + '0');
	}
	free(array);
	return (counter);
}
