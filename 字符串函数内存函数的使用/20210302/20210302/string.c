#define _CRT_SECURE_NO_WARNINGS 1  

#include <stdio.h>
#include <string.h>
#include <assert.h>


//int main()
//{
//	int len = strlen("abcd");
//	printf("%d\n", len);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	const char*str1 = "abcdef";
//	const char*str2 = "bbb";
//	//����ע��strlen��������ֵ����Ϊ�޷�����
//	if (strlen(str2) - strlen(str1)>0)
//	{
//		printf("str2>str1\n");
//	}
//	else
//	{
//		printf("srt1>str2\n");
//	}
//	return 0;
//}

//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char *ret = dest;
//	//����srcָ����ַ�����destָ��Ŀռ䣬����'\0'
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	//����Ŀ�Ŀռ����ʼ��ַ
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = "abcdefg";
//	char arr2[] = "bit";
//	//strcpy(arr1, arr2);
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//char* my_strcat(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest&&src);
//	//1.�ҵ�Ŀ���ַ�����\0
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	//2.׷��
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[25] = "hello";
//	char arr2[] = "world";
//	//strcat(arr1, arr2);
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1&&str2);
//	//�Ƚ�
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	return (*str1 - *str2);
//	//if (*str1 > *str2)
//	//{
//	//	return 1;
//	//}
//	//else
//	//{
//	//	return -1;
//	//}
//
//}
//int main()
//{
//	char *p1 = "azc";
//	char *p2 = "azcdef";
//	//�Ƚ�ÿ���ַ���ASCII��ֵ
//	//int ret = strcmp(p1, p2);
//	int ret = my_strcmp(p1, p2);
//	printf("%d\n", ret);
//	return 0;
//}

////strstr --�����ַ���
////����һ��KMP�㷨
//char* my_strstr(const char* p1, const char* p2)
//{
//	assert(p1&&p2);
//	char* s1 = NULL;
//	char* s2 = NULL;
//	char* cur = (char*)p1;
//	//p2Ϊ���ַ���ʱ
//	if (*p2 == '\0')
//	{
//		return (char*)p1;
//	}
//	while (*cur)
//	{
//		s1 = cur;
//		s2 = (char*)p2;
//		while ((*s1 == *s2) && (*s1 != '\0') && (*s2!='\0'))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return cur;//�ҵ��Ӵ�
//		}
//		if (*s1 == '\0')
//		{
//			return NULL;
//		}
//		cur++;
//	}
//	return NULL;//�Ҳ����Ӵ�
//}
//
//int main()
//{
//	char str[] = "This is a simple string";
//	char * pch;
//	//pch = strstr(str, "simple");
//	pch = my_strstr(str, "simple");
//	strncpy(pch, "sample", 6);
//	puts(str);
//	return 0;
//}


//int main()
//{
//	char str[] = "- This, a sample string.";
//	char * pch;
//	printf("Splitting string \"%s\" into tokens:\n", str);
//	pch = strtok(str, " ,.-");
//	while (pch != NULL)
//	{
//		printf("%s\n", pch);
//		pch = strtok(NULL, " ,.-");
//	}
//	//for(ret=strtok(str,p);ret!=NULL;ret=strtok(NULL,p) ������һ��ѭ��ʵ��
//	//�²�strtok�ڲ�����һ����̬����
//	return 0;
//}


////���󱨸溯��
//#include <errno.h>
//int main()
//{
//	//errno��һ��ȫ�ֵĴ�����ı���
//	//C���� �⺯����ִ�й����У������˴��󣬻�Ѷ�Ӧ�Ĵ����븳ֵ��errno��
//	char* str = strerror(errno);
//	//char* str = strerror(1);
//	printf("%s\n", str);
//	return 0;
//}


////�ַ�ת��ʾ��
//#include <stdio.h> 
//#include <ctype.h> 
//int main()
//{
//	int i = 0;
//	char str[] = "Test String.\n";
//	char c;
//	while (str[i])
//	{
//		c = str[i];
//		if (isupper(c))
//			c = tolower(c);
//		putchar(c);
//		i++;
//	}
//	return 0;
//}

////memcpyʹ��
//
//struct S
//{
//	char name[20];
//	int age;
//};
//
//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest&&src);
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	int arr2[5] = { 0 };
//	//memcpy(arr2, arr1, sizeof(arr1));
//	my_memcpy(arr2, arr1, sizeof(arr1));
//	struct S arr3[] = { { "TOM", 22 }, { "MARRY", 22 } };
//	struct S arr4[3] = { 0 };
//	//memcpy(arr4, arr3, sizeof(arr3));
//	my_memcpy(arr4, arr3, sizeof(arr3));
//
//	return 0;
//}

////memmoveʹ�ã��ڴ��н��������
//
//void* my_memmove(void* dest, void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest&&src);
//	if ((char*)dest > (char*)src && (char*)dest <(char*) src + num)  //�Ӻ���ǰ
//	{
//		while (num--)
//		{
//			char* src1 = (char*)src + num;
//			char* dest1 = (char*)dest + num;
//			*(dest1) = *(src1);
//			//src1--;   //���ﲻ��Ҫ�������ˣ�num�Ϳ���ʵ��--
//			//dest1--;
//		}
//	}
//	else  //��ǰ���
//	{
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	
//	return ret;
//
//
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	//memmove(arr + 2, arr, 20);
//	my_memmove(arr+2, arr, 4);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}



////memcmpʹ��
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	int arr2[] = { 1, 2, 5, 4, 3 };
//	int ret=memcmp(arr1, arr2, 12);
//	printf("%d\n", ret);
//	return 0;
//}


//memsetʹ��

//memset���õ����ֽڣ����ֽ�Ϊ��λ
int main()
{
	char arr1[10] = { "" };
	memset(arr1,0x7F, 10);

	return 0;
}
