#define _CRT_SECURE_NO_WARNINGS 1

//һ�������ǡ�õ�����������֮�ͣ�������ͳ�Ϊ"����"������6 = 1��2��3.����ҳ�1000���ڵ�����������

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
	printf("1000����������");
	for (i = 2; i <= 1000; i++)
	{
		if (1 == PerfectNum(i))
		{
			printf("%d ", i);
		}
	}
    return 0;
}