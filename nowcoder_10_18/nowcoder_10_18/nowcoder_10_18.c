#define _CRT_SECURE_NO_WARNINGS 1

//NC699 ����
//
#include<stdbool.h>
#include<stdio.h>

bool judge(int x) {
    // write code here
    int input;
    int head, tail;
    head = x % 10;
    while (x >= 10)
    {
        x /= 10;
    }
    tail = x % 10;

    if (tail == head)
    {
        return true;
    }
    else
    {
        return false;
    }
}



//NC700 ţţ��ˮ��
//
int doQuestion(int n) {
    // write code here
    int ret = 0;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
                sum += j;
        }
        if (sum / i < 2)
            ret += i;
        sum = 0;
    }
    return ret;
}



//NC713 ţţ�������
//
char* tranBinary(int n) {
    // write code here
    char nbinary[8] = { '0','0','0','0','0','0','0','0' };
    int i = 7;
    while (n)
    {
        if (n % 2 == 0)
        {
            nbinary[i] = '0';
        }
        else
        {
            nbinary[i] = '1';

        }
        n /= 2;
        i--;
    }
    return nbinary;
}



//NC714 ţţ��2���ݴη�(2)
//
char* solve(int n) {
    // write code here
    n -= 7;
    while (n > 1)
    {
        if (n % 2 == 1)
            return "NO";
        n /= 2;
    }
    return "YES";
}



//NC715 ţţ������(1)
//
char* _solve(int n) {
    // write code here
    n *= 7;
    if (n == 0)
        return "NO";
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return "NO";
    }
    return "YES";
}



//NC151 ���Լ��
//
int gcd(int a, int b) {             //շת�����
    // write code here
    int big = a;
    int small = b;
    while (big != small)
    {
        if (big < small)
        {
            int tmp = big;
            big = small;
            small = tmp;
        }
        big -= small;
    }
    return big;
}



//NC692 ��ֵ���������
//
int wwork(int n, int* a, int aLen) {
    // write code here
    int i, count = 0, order = n;
    for (i = n - 1; i >= 0; i--) {
        if (a[i] > order)
            count++;
        order = a[i] < order ? a[i] : order;
    }
    return count;
}



//NC690 ��ѧʵ��
//
int mathexp(long long n) {
    // write code here
    long long prev = 0;
    while (n)
    {
        if (prev == n)
            return n;
        prev = n;
        int tmp = 1;
        while (n)
        {
            tmp *= n % 10;
            n /= 10;
        }
        n = tmp;
    }
    return n;
}



//NC681 ţţ����
//
int findNumber(int a, int b) {
    // write code here
    int ret = b;
    int i = 2;
    if (a < ret)
        return ret;
    while (a >= ret)
    {
        ret = i * b;
        i++;
    }
    return ret;
}



//NC532 ���������
//
char* change(char* number) {
    // write code here
    int len = strlen(number);
    char* head = number;
    char* tail = number + len - 1;
    while (head < tail)
    {
        if ((*head - '0') % 2 == 0 && (*tail - '0') % 2 == 0)
        {
            char tmp = *head;
            *head = *tail;
            *tail = tmp;
            head++;
            tail--;
        }
        else if ((*head - '0') % 2 != 0)
        {
            head++;
        }
        else
        {
            tail--;
        }
    }
    return number;
}



