#define _CRT_SECURE_NO_WARNINGS 1

//输入一行字符，分别统计出其中英文字母、空格、数字和其它字符的个数。

#include <stdio.h>

int main()
{
	char c;
	int letter = 0, digit = 0, space = 0, other = 0;
	printf("请输入字符串：");
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
	printf("英文字母：%d\n数字：%d\n空格：%d\n其他：%d", letter, digit, space, other);
    return 0;
}