#define _CRT_SECURE_NO_WARNINGS 1

//���������������Ƕ������ɴ��⣺
//ѧϰ�ɼ�>=90�ֵ�ͬѧ��A��ʾ��60-89��֮�����B��ʾ��60�����µ���C��ʾ��

#include <stdio.h>
int main()
{
	float score = 0;
	char grade;
	printf("������ɼ���");
	scanf("%f", &score);
	grade = score >= 90 ? 'A' : (score >= 60 ? 'B' : 'C');
	printf("%c", grade);
    return 0;
}