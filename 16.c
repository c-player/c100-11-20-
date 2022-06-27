#define _CRT_SECURE_NO_WARNINGS 1

//输入两个正整数m和n，求其最大公约数和最小公倍数。

#include <stdio.h>

//最大公约数(枚举法)
//int GCD(int m, int n)
//{
//	int gcd = m < n ? m : n;
//	while ((m%gcd != 0) || (n%gcd != 0))
//	{
//		gcd--;
//	}
//	return gcd;
//}

//辗转相减法
//int GCD(int m, int n)
//{
//	while (m != n)
//	{
//		if (m > n)
//		{
//			m -= n;
//		}
//		else
//		{
//			n -= m;
//		}
//	}
//	return m;
//}

//辗转相除法
int GCD(int m, int n)
{
	int temp = 0;
	int gcd = 0;
	if (m > n)
	{
		temp = m;
		m = n;
		n = temp;
	}
	while (n%m != 0)
	{
		gcd = n % m;
		n = m;
		m = gcd;
	}
	return gcd;
}

//最小公倍数(短除法)
//int LCM(int m, int n)
//{
//	int i = 0, lcm = 1;
//	int temp = m < n ? m : n;
//	for (i = 2; i <= temp; i++)
//	{
//		while (m%i == 0 && n%i == 0)
//		{
//			m /= i;
//			n /= i;
//			lcm *= i;
//		}
//	}
//	lcm = lcm * m * n;
//	return lcm;
//}

//最小公倍数=两数之积/最大公约数
int LCM(int m, int n)
{
	return m * n / GCD(m, n);
}

int main()
{
	int m = 0, n = 0;
	printf("请输入两个正整数：");
	scanf("%d%d", &m, &n);
	printf("最大公约数：%d\n最小公倍数：%d", GCD(m, n), LCM(m, n));
    return 0;
}