#define _CRT_SECURE_NO_WARNINGS 1  
#include <stdio.h>
//通过联合体共用存储空间来实现

int checksys()
{
	union Un
	{
		int i;
		char c;
	};
	union Un u;
	u.i = 1;
	return u.c;
}

int main()
{
	int ret = checksys();
	if (ret == 1)
	{
		printf("小端存储方式.\n");
	}
	else
	{
		printf("大端存储方式.\n");
	}
	return 0;
}