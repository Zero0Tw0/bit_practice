#define _CRT_SECURE_NO_WARNINGS 1


//������ 16.05. �׳�β��
//
int trailingZeroes(int n) {
    int tmp = n;
    int ret = 0;
    while (tmp)
    {
        tmp /= 5;
        ret += tmp;
    }
    return ret;
}

//HJ7 ȡ����ֵ
//
int main()
{
    double input;
    scanf("%lf", &input);
    double tmp = input;
    tmp *= 10;
    if ((int)tmp % 10 >= 5)
    {
        printf("%d", (int)input + 1);
    }
    else
    {
        printf("%d", (int)input);

    }
    return 0;
}