#define _CRT_SECURE_NO_WARNINGS 1

/*
��ӡ�����е�"ˮ�ɻ���"����ν"ˮ�ɻ���"��ָһ����λ����
���λ���������͵��ڸ����������磺153��һ��"ˮ�ɻ���"����Ϊ153=1�����η���5�����η���3�����η���
*/

#include <stdio.h>

int main()
{
	int i = 0;
	int a = 0, b = 0, c = 0;
	printf("ˮ�ɻ�����");
	for (i = 100; i < 1000; i++)
	{
		a = i / 100;
		b = i / 10 % 10;
		c = i % 10;
		if (i == a * a * a + b * b * b + c * c * c)
		{
			printf("%d ",i);
		}
	}
    return 0;
}