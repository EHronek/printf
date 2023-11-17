#include "main.h"
/**
 * printing_octal - it should print the octal number
 * @val: the a argument
 * Return: the counter number
 */
int printing_octal(va_list val)
{
	int i;
	int counter = 0;
	int *ptr;
	unsigned int number = va_arg(val, unsigned int);
	unsigned int temp = number;

	while (number / 8 != 0)
	{
		number /= 8;
		counter++;
	}
	counter++;
	ptr = malloc(counter * sizeof(int));
	for (i = 0; i < counter; i++)
	{
		ptr[i] = temp % 8;
		temp = temp / 8;
	}
	for (i = counter - 1; i >= 0; i--)
	{
		_putchar(ptr[i] + 48);
	}
	free(ptr);
	return (counter);
}
