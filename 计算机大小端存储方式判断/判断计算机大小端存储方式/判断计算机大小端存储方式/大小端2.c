#define _CRT_SECURE_NO_WARNINGS 1  
#include <stdio.h>
//ͨ�������干�ô洢�ռ���ʵ��

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
		printf("С�˴洢��ʽ.\n");
	}
	else
	{
		printf("��˴洢��ʽ.\n");
	}
	return 0;
}