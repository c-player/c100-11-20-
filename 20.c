#define _CRT_SECURE_NO_WARNINGS 1

//һ���100�׸߶��������£�ÿ����غ�����ԭ�߶ȵ�һ�룻
//�����£������ڵ�10�����ʱ�������������ף���10�η�����ߣ�

#include <stdio.h>
#define N 10

int main()
{
	float high = 100, dist = 0;
	int i = 0;
	for (i = 0; i < N; i++)
	{
		dist += high * 2;
		high /= 2;
	}
	printf("��%d����ع�����%f�ף������߶�Ϊ%f��", N, dist - 100, high);
    return 0;
}

//  1      2       3 
// 100   +50*2   +25*2   
//  50     25     12.5