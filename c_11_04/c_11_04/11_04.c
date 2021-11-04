#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

void InsertSort(int* a, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		int end = i;
		int tmp = a[end + 1];
		while (end >= 0)
		{
			if (a[end] > tmp)
			{
				a[end + 1] = a[end];
				end--;
			}
			else
			{
				break;
			}
		}
		a[end+1] = tmp;
	}

}
void ShellSort(int* a, int n)
{
	int gap = n;
	while (gap > 1)
	{
		gap = gap / 3 + 1;
		for (int i = 0; i < n - gap; i++)
		{
			int end = i;
			int tmp = a[end + gap];
			while (end >= 0)
			{
				if (a[end] > tmp)
				{
					a[end + gap] = a[end];
					end -= gap;
				}
				else
				{
					break;
				}
			}
			a[end + gap] = tmp;
		}
	}
}

void Swap(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
void SelectSort(int* a, int n)
{
	int min = 0;
	int max = n-1;
	int left = 0;
	int right = n-1;
	while (left < right)
	{
		for (int i = left; i <= right; i++)
		{
			if (a[i] > a[max])
			{
				max = i;
			}
			if (a[i] < a[min])
			{
				min = i;
			}
		}
		Swap(&a[left], &a[min]);
		if (max == left)
		{
			Swap(&a[right], &a[min]);
		}
		else
		{
			Swap(&a[right], &a[max]);
		}
		left++;
		right--;
	}
}

void AdjustDown(int* a, int parent, int size)
{
	int child = parent * 2 + 1;
	while (child < size)
	{
		if (a[child + 1] > a[child] && child+1<size)
		{
			child++;
		}
		if (a[parent] < a[child])
		{
			Swap(&a[parent], &a[child]);
			parent = child;
			child = parent * 2 + 1;
		}
		else
		{
			break;
		}
	}
}
void BuildHeap(int* a, int n)
{
	for (int i = (n - 1 - 1) / 2; i >= 0; i--)
	{
		AdjustDown(a, i, n);
	}
}
void HeapSort(int* a, int n)
{
	//ÅÅÉýÐò£¬½¨´ó¶Ñ
	//½¨¶Ñ
	BuildHeap(a, n);
	int end = n - 1;
	while (end >= 0)
	{
		Swap(&a[0], &a[end]);
		AdjustDown(a,0, end);
		end--;
	}
}

void StrPrint(int* a,int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}

int main()
{
	int a[] = { 9,8,7,6,5,4,3,2,1,0,-1,-2,-3,-4,-5,-6,-7,-8,-9 };
	int sz = sizeof(a) / sizeof(a[0]);
	//InsertSort(a, sz);
	//ShellSort(a, sz);
	//SelectSort(a, sz);
	HeapSort(a, sz);
	StrPrint(a,sz);
	return 0;
}