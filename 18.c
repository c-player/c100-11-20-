#define _CRT_SECURE_NO_WARNINGS 1

//求s = a + aa + aaa + aaaa + aa...a的值，
//其中a是一个数字。例如2 + 22 + 222 + 2222 + 22222(此时共有5个数相加)，几个数相加有键盘控制。

#include <stdio.h>

int N_Sum(int a, int n)
{
	int i = 0, sum = 0;
	int temp = a;
	for (i = 0; i < n; i++)
	{
		sum += a;
		a = a * 10 + temp;
	}
	return sum;
}

int main()
{
	int a = 0, n = 0;
	int s = 0;
	printf("请输入基准数a和控制数n：");
	scanf("%d%d", &a, &n);
	s = N_Sum(a, n);
	printf("和：%d", s);
    return 0;
}