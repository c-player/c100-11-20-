#define _CRT_SECURE_NO_WARNINGS 1

//将一个正整数分解质因数。例如：输入90,打印出90=2*3*3*5。

/*
(1)如果这个质数恰等于（小于的时候，继续执行循环）n，则说明分解质因数的过程已经结束，另外 打印出即可。
(2)但n能被k整除，则应打印出k的值，并用n除以k的商,作为新的正整数n.重复执行第二步。
(3)如果n不能被k整除，则用k+1作为k的值,重复执行第一步。
*/

#include <stdio.h>

void decomprint(int n)
{
	int i = 0;
	printf("%d = ", n);
	for (i = 2; i <= n; i++)
	{
		while (n%i == 0)
		{
			n /= i;
			printf("%d ", i);
			if (n != 1)
			{
				printf("* ");
			}
		}
	}
}

int main()
{
	int n;
	printf("请输入一个正整数：");
	scanf("%d", &n);
	decomprint(n);
    return 0;
}


