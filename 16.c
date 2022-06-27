#define _CRT_SECURE_NO_WARNINGS 1

//��������������m��n���������Լ������С��������

#include <stdio.h>

//���Լ��(ö�ٷ�)
//int GCD(int m, int n)
//{
//	int gcd = m < n ? m : n;
//	while ((m%gcd != 0) || (n%gcd != 0))
//	{
//		gcd--;
//	}
//	return gcd;
//}

//շת�����
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

//շת�����
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

//��С������(�̳���)
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

//��С������=����֮��/���Լ��
int LCM(int m, int n)
{
	return m * n / GCD(m, n);
}

int main()
{
	int m = 0, n = 0;
	printf("������������������");
	scanf("%d%d", &m, &n);
	printf("���Լ����%d\n��С��������%d", GCD(m, n), LCM(m, n));
    return 0;
}