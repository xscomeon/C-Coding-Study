#define _CRT_SECURE_NO_WARNINGS 1  
//指针进阶


#include <stdio.h>

//#include <stdio.h>
//int main()
//{
//	char str1[] = "hello bit.";
//	char str2[] = "hello bit.";
//	char *str3 = "hello bit.";
//	char *str4 = "hello bit.";  //指向同一个常量字符串
//	if (str1 == str2)
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");
//
//	if (str3 == str4)
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are not same\n");
//
//	return 0;
//}

//
//#include <stdio.h>
//void print_arr1(int arr[3][5], int row, int col)  //参数是数组的形式
//{
//	int i = 0;
//	for (i = 0; i<row; i++)
//	{
//		for (int j = 0; j<col; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void print_arr2(int(*arr)[5], int row, int col)  //参数是指针的形式
//{
//	int i = 0;
//	for (i = 0; i<row; i++)
//	{
//		for (int j = 0; j<col; j++)
//		{
//			//printf("%d ", arr[i][j]);
//			printf("%d ", *(*(arr+i)+j));  //arr是数组的指针
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	print_arr1(arr, 3, 5);
//	//数组名arr，表示首元素的地址
//	//但是二维数组的首元素是二维数组的第一行
//	//所以这里传递的arr，其实相当于第一行的地址，是一维数组的地址
//	//可以数组指针来接收
//	print_arr2(arr, 3, 5);
//	return 0;
//}


//一级指针传参
//void print(int *p, int sz)
//{
//	int i = 0;
//	for (i = 0; i<sz; i++)
//	{
//		printf("%d\n", *(p + i));
//	}
//}
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int *p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//一级指针p，传给函数
//	print(p, sz);
//	return 0;
//}


////二级指针传参
//#include <stdio.h>
//void test(int** ptr)
//{
//	printf("num = %d\n", **ptr);
//}
//int main()
//{
//	int n = 10;
//	int*p = &n;
//	int **pp = &p;
//	test(pp);
//	test(&p);
//	return 0;
//}


//char* (*pf)(char*, const char*);
//char* (*pfarr[4])(char*, const char*);

////计算器
//#include <stdio.h>
//int add(int a, int b)
//{
//	return a + b;
//}
//int sub(int a, int b)
//{
//	return a - b;
//}
//int mul(int a, int b)
//{
//	return a*b;
//}
//int div(int a, int b)
//{
//	return a / b;
//}
//
//int main()
//{
//	int x, y;
//	int input = 1;
//	int ret = 0;
//	do
//	{
//		printf("*************************\n");
//		printf("  1:add           2:sub  \n");
//		printf("  3:mul           4:div  \n");
//		printf("*************************\n");
//		printf("请选择：");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("输入操作数：");
//			scanf("%d %d", &x, &y);
//			ret = add(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 2:
//			printf("输入操作数：");
//			scanf("%d %d", &x, &y);
//			ret = sub(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 3:
//			printf("输入操作数：");
//			scanf("%d %d", &x, &y);
//			ret = mul(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 4:
//			printf("输入操作数：");
//			scanf("%d %d", &x, &y);
//			ret = div(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 0:
//			printf("退出程序\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}
//

////使用函数指针数组的实现：
//#include <stdio.h>
//int add(int a, int b)
//{
//	return a + b;
//}
//int sub(int a, int b)
//{
//	return a - b;
//}
//int mul(int a, int b)
//{
//	return a*b;
//}
//int div(int a, int b)
//{
//	return a / b;
//}
//int main()
//{
//	int x, y;
//	int input = 1;
//	int ret = 0;
//	int(*p[])(int x, int y) = { 0, add, sub, mul, div }; //转移表 p是一个函数指针数组
//	while (input)
//	{
//		printf("*************************\n");
//		printf("  1:add           2:sub  \n");
//		printf("  3:mul           4:div  \n");
//		printf("*************************\n");
//		printf("请选择：");
//		scanf("%d", &input);
//		if ((input <= 4 && input >= 1))
//		{
//			printf("输入操作数：");
//			scanf("%d %d", &x, &y);
//			ret = (*p[input])(x, y);
//			printf("ret = %d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("退出\n");
//		}
//		else
//		{
//			printf("输入有误\n");
//		}
//	
//	}
//	return 0;
//}


////计算器
//#include <stdio.h>
//int add(int a, int b)
//{
//	return a + b;
//}
//int sub(int a, int b)
//{
//	return a - b;
//}
//int mul(int a, int b)
//{
//	return a*b;
//}
//int div(int a, int b)
//{
//	return a / b;
//}
//
//
//calc(int (*p)(int,int))
//{
//	int x, y;
//	int ret = 0;
//	printf("输入操作数：");
//	scanf("%d %d", &x, &y);
//	ret = p(x, y);
//	printf("ret = %d\n", ret);
//}
//int main()
//{
//	
//	int input = 1;
//	
//	do
//	{
//		printf("*************************\n");
//		printf("  1:add           2:sub  \n");
//		printf("  3:mul           4:div  \n");
//		printf("*************************\n");
//		printf("请选择：");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			calc(add);  //封装一个函数，传递函数指针在封装函数里调用加减乘除函数
//			/*printf("输入操作数：");
//			scanf("%d %d", &x, &y);
//			ret = add(x, y);
//			printf("ret = %d\n", ret);*/
//			break;
//		case 2:
//			calc(sub);
//			/*printf("输入操作数：");
//			scanf("%d %d", &x, &y);
//			ret = sub(x, y);
//			printf("ret = %d\n", ret);*/
//			break;
//		case 3:
//			calc(mul);
//			/*printf("输入操作数：");
//			scanf("%d %d", &x, &y);
//			ret = mul(x, y);
//			printf("ret = %d\n", ret);*/
//			break;
//		case 4:
//			calc(div);
//			/*printf("输入操作数：");
//			scanf("%d %d", &x, &y);
//			ret = div(x, y);
//			printf("ret = %d\n", ret);*/
//			break;
//		case 0:
//			printf("退出程序\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}
////


///*************************************************************************/
///*qsort函数的使用*/
//
//#include <stdio.h>
////qosrt函数的使用者得实现一个比较函数
////void*指针可以接收任意类型元素的地址，但不能进行解引用操作，不能进行+/-操作
//int int_cmp(const void * p1, const void * p2)
//{
//	//p1为void*指针，排序的是int型数组，首先强制类型转换(int*)
//	return (*(int *)p1 - *(int *)p2);
//}
//int main()
//{
//	int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
//	int i = 0;
//	//arr为数组首元素地址
//	//sizeof(arr)/sizeof(arr[0])求数组元素个数
//	//sizeof(int) 求数组每个元素的大小，单位为字节byte
//	//int_cmp为比较函数，使用qsort函数需要自己写一个比较函数，注意const void*指针的使用
//	//qsort(arr, sizeof(arr) / sizeof(arr[0]), sizeof (int), int_cmp);
//	qsort(arr, sizeof(arr) / sizeof(arr[0]), sizeof (arr[0]), int_cmp);
//	//打印输出数组的结果
//	for (i = 0; i< sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}


///*************************************************************************/
///*使用回调函数，模拟实现qsort（采用冒泡的方式）*/
//
//#include <stdio.h>
//
////void*指针可以接收任意类型元素的地址，但不能进行解引用操作，不能进行+/-操作
////比较函数都为 int int_cmp(const void* p1,const void* p2),比较不同的类型，解引用强制类型转换时类型不同
//int int_cmp(const void * p1, const void * p2)
//{
//	return (*(int *)p1 - *(int *)p2);
//}
//
//
//void _swap(void *p1, void * p2, int size)
//{
//	int i = 0;
//	for (i = 0; i< size; i++)
//	{
//		char tmp = *((char *)p1 + i);
//		*((char *)p1 + i) = *((char *)p2 + i);
//		*((char *)p2 + i) = tmp;
//	}
//}
//
////使用void*指针接收地址，使用时强制类型转换
//void bubble(void *base, int count, int size, int(*cmp)(void *, void *))
//{
//	int i = 0;
//	int j = 0;
//	//冒泡算法比较多少次
//	for (i = 0; i< count - 1; i++)
//	{
//		//每次冒泡算法比较多少对数据
//		for (j = 0; j<count - i - 1; j++)
//		{
//			//比较函数比较两个元素的大小
//			//不知道每个元素的大小，首先都转换为char*类型，然后加上每个元素的大小来实现
//			if (cmp((char *)base + j*size, (char *)base + (j + 1)*size) > 0)
//			{
//				//两个数据需要交换时，按字节交换，故需要把每个元素的大小传参
//				_swap((char *)base + j*size, (char *)base + (j + 1)*size, size);
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
//	//char *arr[] = {"aaaa","dddd","cccc","bbbb"};
//	int i = 0;
//	//qsort函数实现
//	//数组首元素地址，数组大小，每个元素的大小，比较函数
//	bubble(arr, sizeof(arr) / sizeof(arr[0]), sizeof (int), int_cmp);
//
//	//数组结果输出
//	for (i = 0; i< sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}

//int main()
//{

	////一维数组
	//int a[] = { 1, 2, 3, 4 };
	////printf("%d\n", sizeof(a));  //16
	////printf("%d\n", sizeof(a + 0));  //4/8：首元素地址+0 表示指针、、两个例外:sizeof(数组名)和&数组名，其余数组名表示首元素的地址
	////printf("%d\n", sizeof(*a));  //4
	////printf("%d\n", sizeof(a + 1));  //4/8  a+1是第二个元素的地址
	////printf("%d\n", sizeof(a[1]));  //4
	////printf("%d\n", sizeof(&a));  //4/8
	////printf("%d\n", sizeof(*&a));  //16 &a后再解引用，表示的是整个数组的大小
	////printf("%d\n", sizeof(&a + 1));  //4/8
	////printf("%d\n", sizeof(&a[0]));  //4/8
	////printf("%d\n", sizeof(&a[0] + 1));  //4/8

	////字符数组
	//char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
	//printf("%d\n", sizeof(arr));  //6
	//printf("%d\n", sizeof(arr + 0));  //4/8
	//printf("%d\n", sizeof(*arr));  //1
	//printf("%d\n", sizeof(arr[1]));  //1
	//printf("%d\n", sizeof(&arr));  //4/8
	//printf("%d\n", sizeof(&arr + 1));  //4/8
	//printf("%d\n", sizeof(&arr[0] + 1));  //4/8

	//printf("%d\n", strlen(arr));  //随机
	//printf("%d\n", strlen(arr + 0));  //随机
	//printf("%d\n", strlen(*arr));  //传递过去a，97，非法访问内存
	//printf("%d\n", strlen(arr[1]));  //非法访问内存
	//printf("%d\n", strlen(&arr));  //随机
	//printf("%d\n", strlen(&arr + 1));  //随机-6
	//printf("%d\n", strlen(&arr[0] + 1));  //随机-1


	//char arr[] = "abcdef";
	//printf("%d\n", sizeof(arr));//7 字符串里有\0
	//printf("%d\n", sizeof(arr + 0));//4/8
	//printf("%d\n", sizeof(*arr));//1
	//printf("%d\n", sizeof(arr[1]));//1
	//printf("%d\n", sizeof(&arr));//4/8
	//printf("%d\n", sizeof(&arr + 1));//4/8
	//printf("%d\n", sizeof(&arr[0] + 1));//4/8

	//printf("%d\n", strlen(arr));//6
	//printf("%d\n", strlen(arr + 0));//6
	//printf("%d\n", strlen(*arr));//error
	//printf("%d\n", strlen(arr[1]));//error
	//printf("%d\n", strlen(&arr));//6
	//printf("%d\n", strlen(&arr + 1));//随机
	//printf("%d\n", strlen(&arr[0] + 1));//5


	//char *p = "abcdef";
	//printf("%d\n", sizeof(p));//4/8
	//printf("%d\n", sizeof(p + 1));//4/8
	//printf("%d\n", sizeof(*p));//1 ，*p就是字符串中的a
	//printf("%d\n", sizeof(p[0]));//1，p[0]=*(p+0)
	//printf("%d\n", sizeof(&p));//4/8
	//printf("%d\n", sizeof(&p + 1));//4/8
	//printf("%d\n", sizeof(&p[0] + 1));//4/8

	//printf("%d\n", strlen(p));//6
	//printf("%d\n", strlen(p + 1));//5
	//printf("%d\n", strlen(*p));//error
	//printf("%d\n", strlen(p[0]));//error
	//printf("%d\n", strlen(&p));//随机
	//printf("%d\n", strlen(&p + 1));//随机
	//printf("%d\n", strlen(&p[0] + 1));//5


//	//二维数组
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));//48
//	printf("%d\n", sizeof(a[0][0]));//4
//	printf("%d\n", sizeof(a[0]));//16 a[0]相当于第一行作为数组
//	printf("%d\n", sizeof(a[0] + 1));//4 a[0]第一行数组首元素的地址+1，代表第一行第二个元素的地址
//	printf("%d\n", sizeof(*(a[0] + 1)));//4 第一行第二个元素
//	printf("%d\n", sizeof(a + 1));//4/8
//	printf("%d\n", sizeof(*(a + 1)));//16
//	printf("%d\n", sizeof(&a[0] + 1));//4/8
//	printf("%d\n", sizeof(*(&a[0] + 1)));//16
//	printf("%d\n", sizeof(*a));//16
//	printf("%d\n", sizeof(a[3]));//16?  sizeof括号里的表达式不会计算，只是根据类型计算大小，并不会访问a[3]的地址
//
//	return 0;
//}

////笔试题1：
//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int *ptr = (int *)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));//2 5
//	return 0;
//}

////笔试题2：
////由于还没学习结构体，这里告知结构体的大小是20个字节
//struct Test
//{
//	int Num;
//	char *pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
////假设p 的值为0x100000。 如下表表达式的值分别为多少？
//int main()
//{
//	printf("%p\n", p);
//	printf("%p\n", p + 0x1);  //0x100001  struct Test*型变量，指针+1，操作20个字节
//	printf("%p\n", (unsigned long)p + 0x1);  //一个long型的数+1
//	printf("%p\n", (unsigned int*)p + 0x1);  //int*型变量，指针+1，操作4个字节
//	return 0;
//}


////笔试题3：
//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int *ptr1 = (int *)(&a + 1); //4
//	int *ptr2 = (int *)((int)a + 1);// ptr2为a移动一个字节
//	printf("%x ,%x ", ptr1[-1], *ptr2); //01 000000 02 000000 03000000 04000000  输出：02000000
//	return 0;
//}



////笔试题4：
//#include <stdio.h>
//int main()
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) }; //二维数组初始化里面应该是大括号，这里是小括号+逗号表达式
//						//实际赋值为1，3，5，0，0，0  逗号表达式以最后一项为值
//	int *p;
//	p = a[0];
//	printf("%d", p[0]); //output 1
//	return 0;
//}


////笔试题5：
//int main()
//{
//	int a[5][5];
//	int(*p)[4];//数组指针  指向一个数组，有4个int型元素
//	p = a;//a为首元素地址，一个5个元素的地址，类型为int(*)[5]
//		//p的类型int(*)[4]
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	return 0;
//}


////笔试题6：
//int main()
//{
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int *ptr1 = (int *)(&aa + 1);
//	int *ptr2 = (int *)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));//10 5
//	return 0;
//}


////笔试题7：
//int main()
//{
//	char *a[] = { "work", "at", "alibaba" }; //a为char二维数组首元素的地址
//	char**pa = a;
//	pa++;
//	printf("%s\n", *pa);//at
//	return 0;
//}



//笔试题8：
int main()
{
	//c：数组指针 cp：数组指针 cpp：二级指针
	char *c [] = { "ENTER", "NEW", "POINT", "FIRST" };
	char* *cp [] = { c + 3, c + 2, c + 1, c };
	char* **cpp = cp;
	//在运算++cpp时，运算后cpp的值发生改变，下次计算时要用改变后的值
	printf("%s\n", **++cpp);//point
	printf("%s\n", *--*++cpp + 3);//ER
	printf("%s\n", *cpp[-2] + 3);//ST  此时cpp值没有发生变化
	printf("%s\n", cpp[-1][-1] + 1);//EW
	return 0;
}