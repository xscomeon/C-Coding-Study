#define _CRT_SECURE_NO_WARNINGS 1  

#include <stdio.h>

//int main()
//{
//	int a = 10;	//4
//	float f = 10.0; //4  类型不同，内存数据存储方式不同  
//
//	return 0;
//}


//判断当前机器的字节序

//代码1
//int check_sys()
//{
//	int i = 1;
//	return (*(char *)&i);  //i的地址为int*，加括号强制转换为char*
//}

//代码2
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
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}


//输出什么？
//#include <stdio.h>
//int main()
//{
//	char a = -1;  //这里赋值的是数字1，不是‘1’，赋值‘1’的时候才会输出1的ASCII码
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("a=%d,b=%d,c=%d", a, b, c);  //a -1\b -1 \c 255 unsigned导致   打印时%d是整型，会发生整型提升

//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	char a = -128;  //4,294,967,168
//	printf("%u\n", a);  //%u十进制无符号数打印  先进行整型提升，按符号位补充
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
//	unsigned int i;  //无符号数数值永远大于等于0，函数执行循环，i减到0后再次成为一个很大的值
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

//浮点数存储的例子
int main()
{
	int n = 9;
	float *pFloat = (float *)&n;  //强制类型转换，但n的地址没有变化
	printf("n的值为：%d\n", n);
	printf("*pFloat的值为：%f\n", *pFloat);
	*pFloat = 9.0;
	printf("num的值为：%d\n", n);
	printf("*pFloat的值为：%f\n", *pFloat);
	return 0;
}