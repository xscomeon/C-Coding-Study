#define _CRT_SECURE_NO_WARNINGS 1  
//C语言构造类型，结构体，枚举，联合体

#include <stdio.h>
#include <string.h>



////声明一个结构体类型
//
////声明一个学生类型，通过学生类型来创建一个学生对象
//struct Stu
//{
//	char name[20];
//	int age;
//	char sex[5];
//	char id[20];
//}; //注意：分号不能丢
//
//int main()
//{
//	struct Stu s1;		//使用结构体类型创建结构体变量
//	struct Stu s2;
//
//	return 0;
//}



////结构体内存对齐
////第一个成员在与结构体变量偏移量为0的地址处
////其他成员变量要对齐到某个数字（对齐数）的整数倍的地址处。
////对齐数 = 编译器默认的一个对齐数 与 该成员大小的较小值。
////结构体总大小为最大对齐数（每个成员变量都有一个对齐数）的整数倍
////嵌套的结构体对齐到自己的最大对齐数的整数倍处，结构体的整体大小就是所
////有最大对齐数（含嵌套结构体的对齐数）的整数倍
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

////写一个宏，计算结构体中某变量相对于首地址的偏移，并给出说明
////考察： offsetof 宏的实现
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


////位段
////位段的声明和结构是类似的，有两个不同：
////1.位段的成员必须是 int、unsigned int 或signed int 。
////2.位段的成员名后边有一个冒号和一个数字。
//struct A   //这就是一个位段类型
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


////联合类型的声明 
//union Un
//{
//	char c;
//	int i;
//};
//
//int main()
//{
//	//联合变量的定义 
//	union Un un;
//	//计算连个变量的大小 
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