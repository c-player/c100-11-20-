#define _CRT_SECURE_NO_WARNINGS 1

//��һ���������ֽ������������磺����90,��ӡ��90=2*3*3*5��

/*
(1)����������ǡ���ڣ�С�ڵ�ʱ�򣬼���ִ��ѭ����n����˵���ֽ��������Ĺ����Ѿ����������� ��ӡ�����ɡ�
(2)��n�ܱ�k��������Ӧ��ӡ��k��ֵ������n����k����,��Ϊ�µ�������n.�ظ�ִ�еڶ�����
(3)���n���ܱ�k����������k+1��Ϊk��ֵ,�ظ�ִ�е�һ����
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
	printf("������һ����������");
	scanf("%d", &n);
	decomprint(n);
    return 0;
}


