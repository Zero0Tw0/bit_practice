#define _CRT_SECURE_NO_WARNINGS 1


//дһ���꣬���Խ�һ�������Ķ�����λ������λ��ż��λ������
//
//#include<stdio.h>
//
//#define ODD	0x55555555	//01010101 01010101 01010101 01010101
//#define EVEN 0xaaaaaaaa	//10101010 10101010 10101010 10101010
//#define EXOE(X)	(((X&ODD)<<1)|((X&EVEN)>>1))	//������λ���ƻ���ż��λ����
//
//void PrintBinary(int n)				//��ӡ���ζ�����					
//{
//	for (int i = 32 - 1 ; i >= 0; i--)
//	{
//		printf("%d", ((n & (1 << i)) != 0));
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int input;
//	int output;
//	scanf("%d", &input);
//	PrintBinary(input);
//	output = EXOE(input);
//	printf("%d\n", output);
//	PrintBinary(output);
//
//	return 0;
//}



//дһ���꣬����ṹ����ĳ����������׵�ַ��ƫ�ƣ�������˵��
//���죺offsetof���ʵ��
//
//#include<stdio.h>
//
//#define offsetof(a,b) ((char*)(&b)-(char*)(&a))	//�ṹ���׵�ַ��ȥ��Ҫ����ĳ�Ա��ַ
//
//typedef struct stu {
//	char a;
//	int b;
//	double c;
//};    //����һ���ṹ��
//
//int main()
//{
//	struct stu kid;  //����ṹ�����
//	printf("%d", offsetof(kid, kid.c));  
//
//	return 0;
//}



//strcat�Լ������Լ�����
//
//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	char a[20] = "hello ";
//	char b[] = "world";
//	strcat(a, b);
//	puts(a);
//	return 0;
//}



//my_strcat�޸�
//
//#include<stdio.h>
//#include<assert.h>
//
//char* my_strcat(char* dest, const char* sor)
//{
//	assert(dest);
//	assert(sor);
//	assert(dest != sor);
//	while (*dest)
//	{
//		dest++;
//	}
//	while (*dest++ = *sor++)
//	{
//		;
//	}
//	return dest;
//
//}
//
//int main()
//{
//	char a[20] = "Hello ";
//	char b[] = "world";
//	my_strcat(a, b);
//	puts(a);
//	return 0;
//}



//memmove�޸�
//
//#include<stdio.h>
//#include<assert.h>
//
//void* my_memmove(void* dest, const void* sor, unsigned int num)
//{
//	assert(dest);
//	assert(sor);
//	char* cp = (char*)dest;
//	char* p1 = (char*)dest;
//	char* p2 = (char*)sor;
//	if (dest > sor)
//	{
//		while (num--)
//		{
//			*(p1 + num) = *(p2 + num);
//		}
//		return cp;
//	}
//	else
//	{
//		while (num--)
//		{
//			*p1 = *p2;
//			p1++;
//			p2++;
//		}
//		return cp;
//	}
//}
//
//int main()
//{
//	int arr1[] = { 0,1,2,3,4,5,6,7,8,9 };
//	int arr2[] = { 0,0,0,0,0,0,0 };
//	my_memmove(arr1+2, arr1, 16);
//	for (int i = 0; i < (sizeof(arr1) / sizeof(arr1[0])); i++)
//	{
//		printf("%d", arr1[i]);
//	}
//	return 0;
//}