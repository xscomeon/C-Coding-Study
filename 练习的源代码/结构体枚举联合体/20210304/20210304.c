#define _CRT_SECURE_NO_WARNINGS 1  
//C���Թ������ͣ��ṹ�壬ö�٣�������

#include <stdio.h>
#include <string.h>



////����һ���ṹ������
//
////����һ��ѧ�����ͣ�ͨ��ѧ������������һ��ѧ������
//struct Stu
//{
//	char name[20];
//	int age;
//	char sex[5];
//	char id[20];
//}; //ע�⣺�ֺŲ��ܶ�
//
//int main()
//{
//	struct Stu s1;		//ʹ�ýṹ�����ʹ����ṹ�����
//	struct Stu s2;
//
//	return 0;
//}



////�ṹ���ڴ����
////��һ����Ա����ṹ�����ƫ����Ϊ0�ĵ�ַ��
////������Ա����Ҫ���뵽ĳ�����֣������������������ĵ�ַ����
////������ = ������Ĭ�ϵ�һ�������� �� �ó�Ա��С�Ľ�Сֵ��
////�ṹ���ܴ�СΪ����������ÿ����Ա��������һ������������������
////Ƕ�׵Ľṹ����뵽�Լ������������������������ṹ��������С������
////��������������Ƕ�׽ṹ��Ķ���������������
//struct S1
//{
//	char c1;
//	int a;
//	char c2;
//};
//
//struct S2
//{
//	char c1;
//	char c2;
//	int a;
//};
//
//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
//
//int main()
//{
//	struct S1 s1 = { 0 };
//	struct S2 s2 = { 0 };
//
//	printf("%d\n", sizeof(s1));
//	printf("%d\n", sizeof(s2));
//	printf("%d\n", sizeof(struct S3));
//	printf("%d\n", sizeof(struct S4));
//	return 0;
//}

////дһ���꣬����ṹ����ĳ����������׵�ַ��ƫ�ƣ�������˵��
////���죺 offsetof ���ʵ��
//#include <stddef.h>
//struct S
//{
//	char c;
//	int i;
//	double d;
//};
//
//int main()
//{
//	printf("%d\n", offsetof(struct S, c));
//	printf("%d\n", offsetof(struct S, i));
//	printf("%d\n", offsetof(struct S, d));
//	return 0;
//}


////λ��
////λ�ε������ͽṹ�����Ƶģ���������ͬ��
////1.λ�εĳ�Ա������ int��unsigned int ��signed int ��
////2.λ�εĳ�Ա�������һ��ð�ź�һ�����֡�
//struct A   //�����һ��λ������
//	 
//{
//	int _a : 2;
//	int _b : 5;
//	int _c : 10;
//	int _d : 30;
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct A));  //8
//	return 0;
//}


////�������͵����� 
//union Un
//{
//	char c;
//	int i;
//};
//
//int main()
//{
//	//���ϱ����Ķ��� 
//	union Un un;
//	//�������������Ĵ�С 
//	printf("%d\n", sizeof(un));  //4
//	printf("%d\n", &(un.i));
//	printf("%d\n", &(un.c));
//
//	un.i = 0x11223344;
//	un.c = 0x55;
//	printf("%x\n", un.i);
//
//	return 0;
//}

union Un1
{
	char c[5];
	int i;
};
union Un2
{
	short c[7];
	int i;
};

int main()
{
	printf("%d\n", sizeof(union Un1));
	printf("%d\n", sizeof(union Un2));

	return 0;
}