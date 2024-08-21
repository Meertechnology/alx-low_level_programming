#include <stdio.h>
/**
 * main - prints numbers
 * Return: 0 Always
 */
int main(void)
{
	int fib1 = 1, fib2 = 2, fib3, sum = 2;

	while (fib2 <= 4000000)
	{
		fib3 = fib1 + fib2;
		if (fib3 % 2 == 0)
		{
			sum += fib3;
		}
		fib1 = fib2;
		fib2 = fib3;
	}
	printf("%d\n", sum);
	return (0);
}

