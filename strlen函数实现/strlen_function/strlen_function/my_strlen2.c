#define _CRT_SECURE_NO_WARNINGS 1  
//mystrlen实现——递归方式

#include <stdio.h>

//int my_strlen2(const char* ptr)
//{
//	if (*ptr == '\0')
//	{
//		return 0;
//	}
//	else
//	{
//		return 1 + my_strlen2(ptr + 1);
//	}
//
//}
//
//int main()
//{
//
//	char arr[] = "abcdefg";
//	int ret = my_strlen2(arr);
//	printf("%d\n", ret);
//
//	return 0;
//}
