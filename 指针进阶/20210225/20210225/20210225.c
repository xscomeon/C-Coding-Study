#define _CRT_SECURE_NO_WARNINGS 1  
//ָ�����


#include <stdio.h>

//#include <stdio.h>
//int main()
//{
//	char str1[] = "hello bit.";
//	char str2[] = "hello bit.";
//	char *str3 = "hello bit.";
//	char *str4 = "hello bit.";  //ָ��ͬһ�������ַ���
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
//void print_arr1(int arr[3][5], int row, int col)  //�������������ʽ
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
//void print_arr2(int(*arr)[5], int row, int col)  //������ָ�����ʽ
//{
//	int i = 0;
//	for (i = 0; i<row; i++)
//	{
//		for (int j = 0; j<col; j++)
//		{
//			//printf("%d ", arr[i][j]);
//			printf("%d ", *(*(arr+i)+j));  //arr�������ָ��
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	print_arr1(arr, 3, 5);
//	//������arr����ʾ��Ԫ�صĵ�ַ
//	//���Ƕ�ά�������Ԫ���Ƕ�ά����ĵ�һ��
//	//�������ﴫ�ݵ�arr����ʵ�൱�ڵ�һ�еĵ�ַ����һά����ĵ�ַ
//	//��������ָ��������
//	print_arr2(arr, 3, 5);
//	return 0;
//}


//һ��ָ�봫��
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
//	//һ��ָ��p����������
//	print(p, sz);
//	return 0;
//}


////����ָ�봫��
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

////������
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
//		printf("��ѡ��");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("�����������");
//			scanf("%d %d", &x, &y);
//			ret = add(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 2:
//			printf("�����������");
//			scanf("%d %d", &x, &y);
//			ret = sub(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 3:
//			printf("�����������");
//			scanf("%d %d", &x, &y);
//			ret = mul(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 4:
//			printf("�����������");
//			scanf("%d %d", &x, &y);
//			ret = div(x, y);
//			printf("ret = %d\n", ret);
//			break;
//		case 0:
//			printf("�˳�����\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}
//

////ʹ�ú���ָ�������ʵ�֣�
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
//	int(*p[])(int x, int y) = { 0, add, sub, mul, div }; //ת�Ʊ� p��һ������ָ������
//	while (input)
//	{
//		printf("*************************\n");
//		printf("  1:add           2:sub  \n");
//		printf("  3:mul           4:div  \n");
//		printf("*************************\n");
//		printf("��ѡ��");
//		scanf("%d", &input);
//		if ((input <= 4 && input >= 1))
//		{
//			printf("�����������");
//			scanf("%d %d", &x, &y);
//			ret = (*p[input])(x, y);
//			printf("ret = %d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("�˳�\n");
//		}
//		else
//		{
//			printf("��������\n");
//		}
//	
//	}
//	return 0;
//}


////������
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
//	printf("�����������");
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
//		printf("��ѡ��");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			calc(add);  //��װһ�����������ݺ���ָ���ڷ�װ��������üӼ��˳�����
//			/*printf("�����������");
//			scanf("%d %d", &x, &y);
//			ret = add(x, y);
//			printf("ret = %d\n", ret);*/
//			break;
//		case 2:
//			calc(sub);
//			/*printf("�����������");
//			scanf("%d %d", &x, &y);
//			ret = sub(x, y);
//			printf("ret = %d\n", ret);*/
//			break;
//		case 3:
//			calc(mul);
//			/*printf("�����������");
//			scanf("%d %d", &x, &y);
//			ret = mul(x, y);
//			printf("ret = %d\n", ret);*/
//			break;
//		case 4:
//			calc(div);
//			/*printf("�����������");
//			scanf("%d %d", &x, &y);
//			ret = div(x, y);
//			printf("ret = %d\n", ret);*/
//			break;
//		case 0:
//			printf("�˳�����\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}
////


///*************************************************************************/
///*qsort������ʹ��*/
//
//#include <stdio.h>
////qosrt������ʹ���ߵ�ʵ��һ���ȽϺ���
////void*ָ����Խ�����������Ԫ�صĵ�ַ�������ܽ��н����ò��������ܽ���+/-����
//int int_cmp(const void * p1, const void * p2)
//{
//	//p1Ϊvoid*ָ�룬�������int�����飬����ǿ������ת��(int*)
//	return (*(int *)p1 - *(int *)p2);
//}
//int main()
//{
//	int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
//	int i = 0;
//	//arrΪ������Ԫ�ص�ַ
//	//sizeof(arr)/sizeof(arr[0])������Ԫ�ظ���
//	//sizeof(int) ������ÿ��Ԫ�صĴ�С����λΪ�ֽ�byte
//	//int_cmpΪ�ȽϺ�����ʹ��qsort������Ҫ�Լ�дһ���ȽϺ�����ע��const void*ָ���ʹ��
//	//qsort(arr, sizeof(arr) / sizeof(arr[0]), sizeof (int), int_cmp);
//	qsort(arr, sizeof(arr) / sizeof(arr[0]), sizeof (arr[0]), int_cmp);
//	//��ӡ�������Ľ��
//	for (i = 0; i< sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}


///*************************************************************************/
///*ʹ�ûص�������ģ��ʵ��qsort������ð�ݵķ�ʽ��*/
//
//#include <stdio.h>
//
////void*ָ����Խ�����������Ԫ�صĵ�ַ�������ܽ��н����ò��������ܽ���+/-����
////�ȽϺ�����Ϊ int int_cmp(const void* p1,const void* p2),�Ƚϲ�ͬ�����ͣ�������ǿ������ת��ʱ���Ͳ�ͬ
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
////ʹ��void*ָ����յ�ַ��ʹ��ʱǿ������ת��
//void bubble(void *base, int count, int size, int(*cmp)(void *, void *))
//{
//	int i = 0;
//	int j = 0;
//	//ð���㷨�Ƚ϶��ٴ�
//	for (i = 0; i< count - 1; i++)
//	{
//		//ÿ��ð���㷨�Ƚ϶��ٶ�����
//		for (j = 0; j<count - i - 1; j++)
//		{
//			//�ȽϺ����Ƚ�����Ԫ�صĴ�С
//			//��֪��ÿ��Ԫ�صĴ�С�����ȶ�ת��Ϊchar*���ͣ�Ȼ�����ÿ��Ԫ�صĴ�С��ʵ��
//			if (cmp((char *)base + j*size, (char *)base + (j + 1)*size) > 0)
//			{
//				//����������Ҫ����ʱ�����ֽڽ���������Ҫ��ÿ��Ԫ�صĴ�С����
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
//	//qsort����ʵ��
//	//������Ԫ�ص�ַ�������С��ÿ��Ԫ�صĴ�С���ȽϺ���
//	bubble(arr, sizeof(arr) / sizeof(arr[0]), sizeof (int), int_cmp);
//
//	//���������
//	for (i = 0; i< sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}

//int main()
//{

	////һά����
	//int a[] = { 1, 2, 3, 4 };
	////printf("%d\n", sizeof(a));  //16
	////printf("%d\n", sizeof(a + 0));  //4/8����Ԫ�ص�ַ+0 ��ʾָ�롢����������:sizeof(������)��&��������������������ʾ��Ԫ�صĵ�ַ
	////printf("%d\n", sizeof(*a));  //4
	////printf("%d\n", sizeof(a + 1));  //4/8  a+1�ǵڶ���Ԫ�صĵ�ַ
	////printf("%d\n", sizeof(a[1]));  //4
	////printf("%d\n", sizeof(&a));  //4/8
	////printf("%d\n", sizeof(*&a));  //16 &a���ٽ����ã���ʾ������������Ĵ�С
	////printf("%d\n", sizeof(&a + 1));  //4/8
	////printf("%d\n", sizeof(&a[0]));  //4/8
	////printf("%d\n", sizeof(&a[0] + 1));  //4/8

	////�ַ�����
	//char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
	//printf("%d\n", sizeof(arr));  //6
	//printf("%d\n", sizeof(arr + 0));  //4/8
	//printf("%d\n", sizeof(*arr));  //1
	//printf("%d\n", sizeof(arr[1]));  //1
	//printf("%d\n", sizeof(&arr));  //4/8
	//printf("%d\n", sizeof(&arr + 1));  //4/8
	//printf("%d\n", sizeof(&arr[0] + 1));  //4/8

	//printf("%d\n", strlen(arr));  //���
	//printf("%d\n", strlen(arr + 0));  //���
	//printf("%d\n", strlen(*arr));  //���ݹ�ȥa��97���Ƿ������ڴ�
	//printf("%d\n", strlen(arr[1]));  //�Ƿ������ڴ�
	//printf("%d\n", strlen(&arr));  //���
	//printf("%d\n", strlen(&arr + 1));  //���-6
	//printf("%d\n", strlen(&arr[0] + 1));  //���-1


	//char arr[] = "abcdef";
	//printf("%d\n", sizeof(arr));//7 �ַ�������\0
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
	//printf("%d\n", strlen(&arr + 1));//���
	//printf("%d\n", strlen(&arr[0] + 1));//5


	//char *p = "abcdef";
	//printf("%d\n", sizeof(p));//4/8
	//printf("%d\n", sizeof(p + 1));//4/8
	//printf("%d\n", sizeof(*p));//1 ��*p�����ַ����е�a
	//printf("%d\n", sizeof(p[0]));//1��p[0]=*(p+0)
	//printf("%d\n", sizeof(&p));//4/8
	//printf("%d\n", sizeof(&p + 1));//4/8
	//printf("%d\n", sizeof(&p[0] + 1));//4/8

	//printf("%d\n", strlen(p));//6
	//printf("%d\n", strlen(p + 1));//5
	//printf("%d\n", strlen(*p));//error
	//printf("%d\n", strlen(p[0]));//error
	//printf("%d\n", strlen(&p));//���
	//printf("%d\n", strlen(&p + 1));//���
	//printf("%d\n", strlen(&p[0] + 1));//5


//	//��ά����
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));//48
//	printf("%d\n", sizeof(a[0][0]));//4
//	printf("%d\n", sizeof(a[0]));//16 a[0]�൱�ڵ�һ����Ϊ����
//	printf("%d\n", sizeof(a[0] + 1));//4 a[0]��һ��������Ԫ�صĵ�ַ+1�������һ�еڶ���Ԫ�صĵ�ַ
//	printf("%d\n", sizeof(*(a[0] + 1)));//4 ��һ�еڶ���Ԫ��
//	printf("%d\n", sizeof(a + 1));//4/8
//	printf("%d\n", sizeof(*(a + 1)));//16
//	printf("%d\n", sizeof(&a[0] + 1));//4/8
//	printf("%d\n", sizeof(*(&a[0] + 1)));//16
//	printf("%d\n", sizeof(*a));//16
//	printf("%d\n", sizeof(a[3]));//16?  sizeof������ı��ʽ������㣬ֻ�Ǹ������ͼ����С�����������a[3]�ĵ�ַ
//
//	return 0;
//}

////������1��
//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int *ptr = (int *)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));//2 5
//	return 0;
//}

////������2��
////���ڻ�ûѧϰ�ṹ�壬�����֪�ṹ��Ĵ�С��20���ֽ�
//struct Test
//{
//	int Num;
//	char *pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
////����p ��ֵΪ0x100000�� ���±���ʽ��ֵ�ֱ�Ϊ���٣�
//int main()
//{
//	printf("%p\n", p);
//	printf("%p\n", p + 0x1);  //0x100001  struct Test*�ͱ�����ָ��+1������20���ֽ�
//	printf("%p\n", (unsigned long)p + 0x1);  //һ��long�͵���+1
//	printf("%p\n", (unsigned int*)p + 0x1);  //int*�ͱ�����ָ��+1������4���ֽ�
//	return 0;
//}


////������3��
//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int *ptr1 = (int *)(&a + 1); //4
//	int *ptr2 = (int *)((int)a + 1);// ptr2Ϊa�ƶ�һ���ֽ�
//	printf("%x ,%x ", ptr1[-1], *ptr2); //01 000000 02 000000 03000000 04000000  �����02000000
//	return 0;
//}



////������4��
//#include <stdio.h>
//int main()
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) }; //��ά�����ʼ������Ӧ���Ǵ����ţ�������С����+���ű��ʽ
//						//ʵ�ʸ�ֵΪ1��3��5��0��0��0  ���ű��ʽ�����һ��Ϊֵ
//	int *p;
//	p = a[0];
//	printf("%d", p[0]); //output 1
//	return 0;
//}


////������5��
//int main()
//{
//	int a[5][5];
//	int(*p)[4];//����ָ��  ָ��һ�����飬��4��int��Ԫ��
//	p = a;//aΪ��Ԫ�ص�ַ��һ��5��Ԫ�صĵ�ַ������Ϊint(*)[5]
//		//p������int(*)[4]
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	return 0;
//}


////������6��
//int main()
//{
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int *ptr1 = (int *)(&aa + 1);
//	int *ptr2 = (int *)(*(aa + 1));
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));//10 5
//	return 0;
//}


////������7��
//int main()
//{
//	char *a[] = { "work", "at", "alibaba" }; //aΪchar��ά������Ԫ�صĵ�ַ
//	char**pa = a;
//	pa++;
//	printf("%s\n", *pa);//at
//	return 0;
//}



//������8��
int main()
{
	//c������ָ�� cp������ָ�� cpp������ָ��
	char *c [] = { "ENTER", "NEW", "POINT", "FIRST" };
	char* *cp [] = { c + 3, c + 2, c + 1, c };
	char* **cpp = cp;
	//������++cppʱ�������cpp��ֵ�����ı䣬�´μ���ʱҪ�øı���ֵ
	printf("%s\n", **++cpp);//point
	printf("%s\n", *--*++cpp + 3);//ER
	printf("%s\n", *cpp[-2] + 3);//ST  ��ʱcppֵû�з����仯
	printf("%s\n", cpp[-1][-1] + 1);//EW
	return 0;
}