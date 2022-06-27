#define _CRT_SECURE_NO_WARNINGS 1

//一个数如果恰好等于它的因子之和，这个数就称为"完数"。例如6 = 1＋2＋3.编程找出1000以内的所有完数。

#include <stdio.h>

int PerfectNum(int n)
{
	int i = 0;
	int sum = 1;
	for (i = 2; i <= n/2; i++)
	{
		if (n%i == 0)
		{
			sum += i;
		}
	}
	if (n == sum)
		return 1;
	return 0;
}

int main()
{
	int i = 0;
	printf("1000以内完数：");
	for (i = 2; i <= 1000; i++)
	{
		if (1 == PerfectNum(i))
		{
			printf("%d ", i);
		}
	}
    return 0;
}