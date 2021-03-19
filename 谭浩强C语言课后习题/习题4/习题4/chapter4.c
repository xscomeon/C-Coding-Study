#define _CRT_SECURE_NO_WARNINGS 1  
//chapter4

#include <stdio.h>

//1.算术运算，关系运算，逻辑运算

//2.真假判断：0表示假，非0表示真

//3.优先级：逻辑非>算术运算符>关系运算符>逻辑运算符

//4.
//int main()
//{
//	int a, b, c;
//	int max = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	max = a > b ? a : b;
//	max = c > max ? c : max;
//	printf("max is %d\n", max);
//	return 0;
//}

//5.
//#include <math.h>
//int main()
//{
//	double x;
//	do{
//		scanf("%lf", &x);
//		if (x >= 1000||x<0)
//		{
//			printf("请输入小于1000的正数\n");
//		}
//	} while (x >= 1000 || x < 0);
//
//	printf("%.0lf\n", sqrt(x));
//	return 0;
//}

//6.
//int main()
//{
//	int x = 0;
//	int y;
//	scanf("%d", &x);
//	if(x < 1)  y = x;
//	else if(x >= 1 && x < 10)  y = 2*x - 1;
//	else y = 3*x - 11;
//	
//	printf("%d", y);
//	return 0;
//}
////case 语句里必须跟常量  break;

//9.函数递归实现更为方便

//10.case语句实现

//11 排序算法
//12.把坐标转化为绝对值减少运算
	//求出坐标与圆心的相对距离，用到sqrt函数
	//条件表达式判断与半径的大小

