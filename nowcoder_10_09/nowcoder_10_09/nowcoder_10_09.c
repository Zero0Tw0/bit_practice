#define _CRT_SECURE_NO_WARNINGS 1

//BC111 小乐乐与进制转换
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



//BC112 小乐乐求和
//
//#include<stdio.h>
//
//int main()
//{
//    int input;
//    long long int sum = 0;
//    scanf("%ld", &input);
//    for (int i = 1; i <= input; i++)
//    {
//        sum = sum + i;
//    }
//    printf("%lld", sum);
//    return 0;
//}



//BC113 小乐乐定闹钟
//
//#include<stdio.h>
//
//int main()
//{
//    int hour, min, time;
//    scanf("%d:%d %d", &hour, &min, &time);
//    min += time % 60;
//    if (min >= 60)
//    {
//        hour = hour + time / 60 + 1;
//        hour %= 24;
//        min %= 60;
//    }
//    else
//    {
//        hour = hour + time / 60;
//        hour %= 24;
//
//    }
//    printf("%02d:%02d", hour, min);
//    return 0;
//}



//BC114 小乐乐排电梯
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



//BC115 小乐乐与欧几里得
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



//BC116 小乐乐改数字
//
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    int n, sum = 0, m;
//    int a[9], i = 0;
//    scanf("%d", &n);
//    while (n)
//    {
//        m = n % 10;
//        n /= 10;
//        if (m % 2 == 0)
//            a[i] = 0;
//        else
//            a[i] = 1;
//        sum += a[i] * pow(10, i);
//        i++;
//    }
//    printf("%d", sum);
//    return 0;
//}



//BC117 小乐乐走台阶
//
//#include<stdio.h>
//
//int main()
//{
//    int input;
//    scanf("%d", &input);
//    int method[100];
//    method[1] = 1;
//    method[0] = 1;
//    for (int i = 2; i <= input; i++)
//    {
//        method[i] = method[i - 1] + method[i - 2];
//    }
//    printf("%d", method[input]);
//    return 0;
//}



//BC118 小乐乐与序列
//
#include <stdio.h>

int main()
{
    int n, i, input, max = 0;
    int a[100001] = { 0 };
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &input);
        a[input] = input;
        if (input >= max)
        {
            max = input;
        }
    }

    for (i = 1; i <= max; i++)
    {
        if (a[i])
        {
            printf("%d ", a[i]);
        }
    }
    return 0;
}



//BC119 小乐乐与字符串
//
#include<stdio.h>




