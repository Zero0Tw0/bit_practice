#define _CRT_SECURE_NO_WARNINGS 1


//д�� C ���Գ���ʵ�ּ�����Ȼ���� 1 �� 100 ֮�͡�
//
//#include<stdio.h>
//
//int main()
//{
//	int sum = 0;
//	for (int i = 1; i <= 100; i++)
//	{
//		sum += i;
//	}
//	printf("%d", sum);
//	return 0;
//}



//��һ����ά�����У�ÿһ�ж����մ����ҵ�����˳������
//ÿһ�ж����մ��ϵ��µ�����˳�����������һ��������
//����������һ����ά�����һ���������ж��������Ƿ��и�����
//ʱ�临�Ӷȣ�O(row+col)
//
//#include<stdio.h>
//
//#define ROW 4
//#define COL 4
//
//
//int main()
//{
//	int input;
//	int curr = 0, curl=COL-1;
//	int arr[ROW][COL] = { 1,2,8,9,2,4,9,12,4,7,10,13,6,8,11,15 };
//	scanf("%d", &input);
//	while (curr < ROW && curl >= 0)
//	{
//		if (input > arr[curr][curl])
//		{
//			curr++;
//		}
//		else if (input < arr[curr][curl])
//		{
//			curl--;
//		}
//		else
//		{
//			printf("�ҵ�\n");
//			return 0;
//		}
//	}
//	printf("�Ҳ���\n");
//	return 0;
//}



//�� 1000 ƿҩ�����������һƿ���ж��ģ�С�������һ�������Ժ�ͻ�������
//���ʣ���һ���������ҳ��ж���ҩ�������Ҫ����ֻС����
//
#include<stdio.h>

int main()
{
	int mouseNumber = 0;
	int poison = 1000;
	while (poison)
	{
		poison /= 2;
		mouseNumber++;
		//��ʮֻ��������������ʾ�����ƣ���������1��û�������㣬
		// ÿֻ����ֻ�ȱ�λ�Ķ�ҩ���������ɵĶ����ƾ�����ƿ��ҩ
	}
	printf("��һ���������ҳ��ж���ҩ�������Ҫ%dֻС����", mouseNumber);
	return 0;
}