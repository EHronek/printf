#include "main.h"
/**
  * printing_hexd - it should print hexadecimal numbers
  * @val: the argument
  * Return: counts
  */
int printing_hexd(va_list val)
{
	int i;
	int count = 0;
	unsigned int nums = va_arg(val, unsigned int);
	unsigned int temp = nums;
	int *ptr;

	while (nums / 16 != 0)
	{
		nums = nums / 16;
		count++;
	}
	count++;
	ptr = malloc(count * sizeof(int));

	for (i = 0; i < count; i++)
	{
		ptr[i] = temp % 16;
		temp = temp / 16;
	}
	for (i = count - 1; i >= 0; i--)
	{
		if (ptr[i] > 9)
			ptr[i] = ptr[i] + 39;
		_putchar(ptr[i] + '0');
	}
	free(ptr);
	return (count);
}
