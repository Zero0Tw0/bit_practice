#define _CRT_SECURE_NO_WARNINGS 1



//BC111 С���������ת������ʮ����ת6����
// 
//#include<stdio.h>
//
//void function(int x)
//{
//    if (x > 5)
//        function(x / 6);
//    printf("%d", x % 6);
//}
//
//int main()
//{
//    int input;
//    scanf("%d", &input);
//    function(input);
//    return 0;
//}



//BC114 С�����ŵ���
//
//#include<stdio.h>
//
//int main()
//{
//    int input;
//    int times, ans;
//    scanf("%d", &input);
//    times = input / 12;
//    ans = times * 4 + 2;
//    printf("%d", ans);
//    return 0;
//}



//BC115 С������ŷ�����
//
//#include<stdio.h>
//
//int main()
//{
//    long long tmp = 0;
//    long long n, m, t = 0, max = 0, min = 0;
//    scanf("%lld%lld", &n, &m);
//    tmp = n * m;
//    if (n < m)
//    {
//        t = n;
//        n = m;
//        m = t;
//    }
//    while (n % m != 0)
//    {
//        t = n % m;
//        n = m;
//        m = t;
//    }
//    max = m;
//    min = tmp / max;
//    tmp = max + min;
//    printf("%lld", tmp);
//
//    return 0;
//}



//BC135 KiKi��ָ������
//
//#include<stdio.h>
//
//int is_prime(int x)
//{
//    for (int i = 3; i < x; i++)
//    {
//        if (x % i == 0)
//            return 0;
//    }
//    return 1;
//}
//
//int main()
//{
//    int ans = 0;
//    for (int i = 100; i < 1000; i++)
//    {
//        if (is_prime(i))
//        {
//            ans++;
//        }
//    }
//    printf("%d", ans);
//    return 0;
//}



//BC69 ����������ͼ��
//
//#include<stdio.h>
//
//int main()
//{
//    int input = 0;
//    for (int k = 3; k <= 20; k++)
//    {
//        scanf("%d", &input);
//        for (int i = 0; i < input; i++)
//        {
//            for (int j = 0; j < input; j++)
//            {
//                if (j == 0 || i == 0 || j == input - 1 || i == input - 1)
//                {
//                    printf("* ");
//                }
//                else
//                {
//                    printf("  ");
//                }
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}



//BC76 ����Ա����
//
//#include<stdio.h>
//
//int main()
//{
//    int arr[7];
//    int sum = 0, max = 0, min = 0, i, j;
//    for (i = 0; i < 7; i++)
//    {
//
//        scanf("%d", &arr[i]);
//        sum += arr[i];
//    }
//    max = arr[0];
//    min = arr[0];
//    for (i = 1; i < 7; i++)
//    {
//        if (arr[i] > max)
//        {
//            max = arr[i];
//        }
//        else if(arr[i]<min)
//        {
//            min = arr[i];
//        }
//    }
//    sum = sum - max - min;
//    printf("%.2f", (float)sum / 5);
//}



//BC51 �������ж�
//
//#include<stdio.h>
//int main()
//{
//    int a, b, c, max;
//    while (scanf("%d%d%d", &a, &b, &c) != EOF)
//    {
//        max = c;
//        if (a > c)
//        {
//            max = a;
//            a = c;
//            c = max;
//        }
//        else if (b > c)
//        {
//            max = b;
//            b = c;
//            c = max;
//        }
//        if (a + b > c)
//        {
//            if (a == c || b == c || a == b)
//            {
//                if (a == c && b == c)
//                    printf("Equilateral triangle!\n");
//                else
//                    printf("Isosceles triangle!\n");
//            }
//            else
//                printf("Ordinary triangle!\n");
//        }
//        else
//            printf("Not a triangle!\n");
//    }
//    return 0;
//}



//ð������
//
//#include<stdio.h>
//
//void bub_sort(int *arr, int sz)
//{
//    int tmp = 0;
//    for (int i = 0; i < sz - 1; i++)
//    {
//        for (int j = 0; j < sz - i - 1; j++)
//        {
//            if (arr[j] > arr[j + 1])
//            {
//                tmp = arr[j];;
//                arr[j] = arr[j + 1];
//                arr[j + 1] = tmp;
//            }
//        }
//    }
//}
//
//int main()
//{
//    int arr[] = { 9,8,7,6,5,4,3,2,1 };
//    int sz = sizeof(arr)/sizeof(arr[0]);
//    printf("ð������ǰ��\n");
//    for (int i = 0; i < sz; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    bub_sort(arr, sz);
//    printf("\nð�������\n");
//    for (int i = 0; i < sz; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}



//��������
//
//#include<stdio.h>
//
//void exchange_arr(int* a, int* b, int sz)
//{
//	int tmp;
//	int i = 0;
//	while (i<sz)
//	{
//		tmp = *a;
//		*a = *b;
//		*b = tmp;
//		a++;
//		b++;
//		i++;
//	}
//}
//
//int main()
//{
//	int a[10] = { 0 };
//	int b[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(a) / sizeof(a[0]);
//	exchange_arr(a, b, sz);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", b[i]);
//	}
//	return 0;
//}



//��������в���������ʼ������ӡ������
//
//#include<stdio.h>
//
//print(int* arr, int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//reverse(int* arr, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	int tmp;
//	while (left<right)
//	{
//		tmp = *(arr + left);
//		*(arr + left) = *(arr + right);
//		*(arr + right) = tmp;
//		left++;
//		right--;
//	}
//}
//
//init(int* arr, int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	reverse(arr, sz);
//	print(arr, sz);
//	init(arr, sz);
//	print(arr, sz);
//	return 0;
//}



//���������������в�ͬλ�ĸ���
//
//#include<stdio.h>
//
//int main()
//{
//	int a, b, tmp;
//	int count = 0;
//	scanf("%d%d", &a, &b);
//	tmp = a ^ b;
//	while (tmp)
//	{
//		if (tmp % 2 == 1)
//		{
//			count++;
//		}
//		tmp /= 2;
//	}
//	printf("%d", count);
//	return 0;
//
//}



//��ӡһ�����Ķ���������λ��ż��λ
//
//#include<stdio.h>
//
//int main() 
//{
//	int num = 0;
//	printf("������һ����:");
//	scanf("%d", &num);
//	printf("����λ��");
//	for (int i = 31; i >= 1; i -= 2) 
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	printf("\n");
//	printf("ż��λ��");
//	for (int i = 30; i >= 0; i -= 2) 
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	printf("\n");
//	return 0;
//}



//��һ��������������1�ĸ���
//
//#include<stdio.h>
//
//int main()
//{
//	int a, tmp;
//	int count = 0;
//	scanf("%d", &a);
//	tmp = a;
//	while (tmp)
//	{
//		if (tmp % 2 == 1)
//		{
//			count++;
//		}
//		tmp /= 2;
//	}
//	printf("%d", count);
//	return 0;
//}



//��������ʱ��������������
//
//#include<stdio.h>
//
//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d %d", a, b);
//	return 0;
//}



//BC45 ��߷���
//
//#include<stdio.h>
//
//int main()
//{
//    int a, b, c;
//    int max;
//    while (scanf("%d%d%d", &a, &b, &c) != EOF)
//    {
//        max = a;
//        if (b > max)
//        {
//            max = b;
//        }
//        if (c > max)
//        {
//            max = c;
//        }
//        printf("%d\n", max);
//    }
//    return 0;
//}



//BC105
//
//#include <stdio.h>
//
//int main()
//{
//    int n, m, flag = 1;
//    scanf("%d%d", &n, &m);
//    int a[n][m], b[n][m];
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//        {
//            scanf("%d", &a[i][j]);
//        }
//    }
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//        {
//            scanf("%d", &b[i][j]);
//        }
//    }
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//        {
//            if (a[i][j] != b[i][j])
//            {
//                flag = 0;
//            }
//        }
//    }
//    if (flag)
//    {
//        printf("Yes");
//    }
//    else
//    {
//        printf("No");
//    }
//    return 0;
//}



//ʹ��ָ���ӡ��������
//
//#include<stdio.h>
//
//int main()
//{
//    int arr[] = { 1,2,3,4,5,6,7,8,9 };
//    int* p = arr;
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    for (int i = 0; i < sz; i++)
//    {
//        printf("%d ", *(p + i));
//    }
//    return 0;
//}



//�������
//
//#include <stdio.h>
//
//int main()
//{
//	int a;
//	int sum = 0;
//	int tmp = 0;
//	scanf("%d", &a);
//	tmp = a;
//	for (int i = 0; i < 5; i++)
//	{
//		sum = sum + tmp;
//		tmp = tmp * 10 + a;
//	}
//	printf("%d", sum);
//	return 0;
//}



//��ӡˮ�ɻ���
//
//#include<stdio.h>
//#include<math.h>
//
//int main()
//{
//
//	for (int i = 0; i < 100000; i++)
//	{
//		int sum = 0;
//		int count = 0;
//		int tmp = i;
//		while (tmp)//�ҳ�λ��
//		{
//			count++;
//			tmp /= 10;
//		}
//		tmp = i;
//		while (tmp)
//		{
//			sum = sum + (int)pow(tmp % 10, count);
//			tmp /= 10;
//		}
//		if (sum == i)
//			printf("%d ", i);
//	}
//	return 0;
//}



//�����ַ���
//
//#include<stdio.h>
//
//reverse(char* arr, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	char tmp;
//	while (left<right)
//	{
//		tmp = *(arr + left);
//		*(arr + left) = *(arr + right);
//		*(arr + right) = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[50];
//	gets(arr);
//	int sz = strlen(arr);
//	reverse(arr, sz);
//	printf("%s", arr);
//	return 0;
//}



//��ӡ����
//
//#include<stdio.h>
//
//int main()
//{
//	for (int i = 0; i < 7; i++)//��ӡǰ7��
//	{
//		for (int k = 0; k < 7 - i -1; k++)
//		{
//			printf(" ");//��ӡ�ո�
//		}
//		for (int j = 0; j < 2*i+1; j++)
//		{
//			printf("*");//��ӡ��*��
//		}
//		printf("\n");
//	}
//	for (int i = 5; i >= 0; i--)//��ӡ��6��
//	{
//		for (int k = 5-i; k >= 0; k--)//��ӡ�ո�
//		{
//			printf(" ");
//		}
//		for (int j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");//��ӡ��*��
//		}
//		printf("\n");
//	}
//	return 0;
//}



//����ˮ����
//
#include<stdio.h>

int main()
{
	int input, tmp = 0, sum = 0;
	scanf("%d", &input);
	while (input > 0)
	{
		sum = sum + input;
		input = input + tmp;
		tmp = input % 2;
		input = input / 2;
	}
	printf("%d", sum);
	return 0;
}