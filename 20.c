#define _CRT_SECURE_NO_WARNINGS 1

//一球从100米高度自由落下，每次落地后反跳回原高度的一半；
//再落下，求它在第10次落地时，共经过多少米？第10次反弹多高？

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
	printf("第%d次落地共经过%f米，反弹高度为%f米", N, dist - 100, high);
    return 0;
}

//  1      2       3 
// 100   +50*2   +25*2   
//  50     25     12.5