#define _CRT_SECURE_NO_WARNINGS 1

//利用条件运算符的嵌套来完成此题：
//学习成绩>=90分的同学用A表示，60-89分之间的用B表示，60分以下的用C表示。

#include <stdio.h>
int main()
{
	float score = 0;
	char grade;
	printf("请输入成绩：");
	scanf("%f", &score);
	grade = score >= 90 ? 'A' : (score >= 60 ? 'B' : 'C');
	printf("%c", grade);
    return 0;
}