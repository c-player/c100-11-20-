#define _CRT_SECURE_NO_WARNINGS 1

/*
古典问题（兔子生崽）：有一对兔子，从出生后第3个月起每个月都生一对兔子，
小兔子长到第三个月后每个月又生一对兔子，假如兔子都不死，问每个月的兔子总数为多少？
（输出前40个月即可）
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

//月 1 2 3 4 5 6 
//对 1 1 2 3 5 8 ...即斐波那契数列