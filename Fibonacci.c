#include <stdio.h>

/*
 * a function that prints the fibnacci sequence
 */
int fibonacci(int i)
{
	if (i == 0)
	{
		return 0;
	}
	if (i == 1)
	{
		return 1;
	}
	return fibonacci(i - 1) + fibonacci(i -2);
}
int main()
{
	int i;
	
	for (i = 0; i < 100; i++)
	{
		printf("%d\t\n", fibonacci(i));
	}
	return 0;
}
