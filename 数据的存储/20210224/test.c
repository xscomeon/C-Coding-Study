#define _CRT_SECURE_NO_WARNINGS 1  

#include <stdio.h>

//int main()
//{
//	int a = 10;	//4
//	float f = 10.0; //4  ���Ͳ�ͬ���ڴ����ݴ洢��ʽ��ͬ  
//
//	return 0;
//}


//�жϵ�ǰ�������ֽ���

//����1
//int check_sys()
//{
//	int i = 1;
//	return (*(char *)&i);  //i�ĵ�ַΪint*��������ǿ��ת��Ϊchar*
//}

//����2
//int check_sys()
//{
//	union
//	{
//		int i;
//		char c;
//	}un;
//	un.i = 1;
//	return un.c;
//}
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//	return 0;
//}


//���ʲô��
//#include <stdio.h>
//int main()
//{
//	char a = -1;  //���︳ֵ��������1�����ǡ�1������ֵ��1����ʱ��Ż����1��ASCII��
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("a=%d,b=%d,c=%d", a, b, c);  //a -1\b -1 \c 255 unsigned����   ��ӡʱ%d�����ͣ��ᷢ����������

//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	char a = -128;  //4,294,967,168
//	printf("%u\n", a);  //%uʮ�����޷�������ӡ  �Ƚ�������������������λ����
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	//char a = 128;  //4,294,967,168
//	//printf("%u\n", a);
//
//	//int i = -20;
//	//unsigned  int  j = 10;
//	//printf("%d\n", i + j);  //-10
//
//	unsigned int i;  //�޷�������ֵ��Զ���ڵ���0������ִ��ѭ����i����0���ٴγ�Ϊһ���ܴ��ֵ
//	//int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//	}
//	return 0;
//}


//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i<1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a)); //255   -1,...,-128,127,126,...,0
//	return 0;
//}

//unsigned char i = 0;
//int main()
//{
//	for (i = 0; i <= 255; i++)
//	{
//		printf("hello world\n");
//	}
//	return 0;
//}

//�������洢������
int main()
{
	int n = 9;
	float *pFloat = (float *)&n;  //ǿ������ת������n�ĵ�ַû�б仯
	printf("n��ֵΪ��%d\n", n);
	printf("*pFloat��ֵΪ��%f\n", *pFloat);
	*pFloat = 9.0;
	printf("num��ֵΪ��%d\n", n);
	printf("*pFloat��ֵΪ��%f\n", *pFloat);
	return 0;
}