#define _CRT_SECURE_NO_WARNINGS 1

//��s = a + aa + aaa + aaaa + aa...a��ֵ��
//����a��һ�����֡�����2 + 22 + 222 + 2222 + 22222(��ʱ����5�������)������������м��̿��ơ�

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
	printf("�������׼��a�Ϳ�����n��");
	scanf("%d%d", &a, &n);
	s = N_Sum(a, n);
	printf("�ͣ�%d", s);
    return 0;
}