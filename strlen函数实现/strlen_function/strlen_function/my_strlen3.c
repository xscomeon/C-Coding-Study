#define _CRT_SECURE_NO_WARNINGS 1  
//my_strlen3 ʵ�ַ�ʽ����ָ��-ָ��

#include <stdio.h>

int my_strlen3(const char* ptr)
{
	char* s = ptr;
	while (*s != '\0')
	{
		s++;
	}
	return s - ptr;
}

int main()
{

	char arr[] = "abcdefg";
	int ret = my_strlen3(arr);
	printf("%d\n", ret);

	return 0;
}

