#define _CRT_SECURE_NO_WARNINGS 1

/*
�ŵ����⣨�������̣�����һ�����ӣ��ӳ������3������ÿ���¶���һ�����ӣ�
С���ӳ����������º�ÿ��������һ�����ӣ��������Ӷ���������ÿ���µ���������Ϊ���٣�
�����ǰ40���¼��ɣ�
*/

#include <stdio.h>

int main()
{
	int f1 = 1, f2 = 1;
	int i = 1;
	while (i < 21)
	{
		printf("%-10d %-10d ", f1, f2);
		f1 = f1 + f2;
		f2 = f1 + f2;
		if (i % 5 == 0)
		{
			printf("\n");
		}
		i++;
	}
    return 0;
}

//�� 1 2 3 4 5 6 
//�� 1 1 2 3 5 8 ...��쳲���������