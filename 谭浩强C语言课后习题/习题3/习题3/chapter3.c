#define _CRT_SECURE_NO_WARNINGS 1  
#include <stdio.h>
#include <math.h>

//1.
//int main()
//{
//	float p=1.0;
//	float r = 0.07;
//	int n = 10;
//	//���ÿ⺯��ʵ��
//	p = pow(1 + r, n);
//	//for (int i = 0; i < 10; ++i)
//	//{
//	//	p = p*(1 + r);
//	//}
//	printf("%f\n", p);
//	return 0;
//}

//2.
//int main()
//{
//	int p = 1000;//����
//	float r1 = 0.015, r2 = 0.021, r3 = 0.0275, r5 = 0.03, r0 = 0.0035;
//	float p1 = p*(1 + 5*r5);//һ�δ�5��
//	float p2 = p*(1 + 2 * r2)*(1 + 3 * r3);//�ȴ�2���ٴ�3��
//	float p3 = p*(1 + 3 * r3)*(1 + 2 * r2);//�ȴ�3���ٴ�2��
//	float p4 = p*pow(1 + r1, 5);//��1�꣬����5��
//	float p5 = p*pow(1 + r0/4, 4 * 5);//5�����
//
//	printf("%.2f\n", p1);
//	printf("%.2f\n", p2);
//	printf("%.2f\n", p3);
//	printf("%.2f\n", p4);
//	printf("%.2f\n", p5);
//	return 0;
//}

//3.
//int main()
//{
//	int d = 300000, p = 6000;
//	float r = 0.01;
//	float m = (log(p) - log(p - d*r)) / log(1 + r);
//	printf("m=%0.1f\n", m);
//
//	return 0;
//}

//4.5.6.7.8.��

