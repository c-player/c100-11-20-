#define _CRT_SECURE_NO_WARNINGS 1

//����һ���ַ����ֱ�ͳ�Ƴ�����Ӣ����ĸ���ո����ֺ������ַ��ĸ�����

#include <stdio.h>

int main()
{
	char c;
	int letter = 0, digit = 0, space = 0, other = 0;
	printf("�������ַ�����");
	while ((c = getchar())!= '\n')
	{
		if (c >= '0'&&c <= '9')
		{
			digit++;
		}
		else if ((c >= 'A'&&c <= 'Z') || (c >= 'a'&&c <= 'z'))
		{
			letter++;
		}
		else if (c == ' ')
		{
			space++;
		}
		else
		{
			other++;
		}
	}
	printf("Ӣ����ĸ��%d\n���֣�%d\n�ո�%d\n������%d", letter, digit, space, other);
    return 0;
}