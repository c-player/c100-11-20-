#define _CRT_SECURE_NO_WARNINGS 1

//判断 101 到 200 之间的素数

#include <stdio.h>
#include <math.h>

int isPrime(int n)
{
	int i = 0;
	for (i = 2; i <= (int)sqrt(n); i++)
	{
		if (n%i == 0)
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	int i = 0;
	int count = 0;
	for (i = 101; i <= 200; i++)
	{
		if (1 == isPrime(i))
		{
			printf("%-5d ", i);
			count++;
			if (count % 5 == 0)
			{
				printf("\n");
			}
		}
	}
    return 0;
}
