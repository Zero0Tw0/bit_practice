//#define _CRT_SECURE_NO_WARNINGS 1
//
//
//#include<stdio.h>
//
//int main()
//{
//    int N = 0, n = 0, a[5] = { 0 }, count = 0, count2 = 0;
//    scanf("%d", &N);
//    for (int i = 0; i < N; i++)
//    {
//        scanf("%d", &n);
//        if (n % 10 == 0) a[0] = a[0] + n;//����ܱ�5����������ż��
//        if (n % 5 == 1)
//        {
//            count++;
//            if (count % 2 != 0) a[1] = a[1] + n;//�������
//            else a[1] = a[1] - n;
//        }
//        if (n % 5 == 2) a[2] = a[2] + 1;//��5��������ĸ���
//        if (n % 5 == 3)//�ȼ�¼����Ϊ3���ܺͺ͸���������ƽ��������
//        {
//            a[3] = a[3] + n;
//            count2++;
//        }
//        if (n % 5 == 4 && n > a[4]) a[4] = n;//���5����Ϊ4�������
//    }
//    if (a[0] != 0) printf("%d ", a[0]);
//    else printf("N ");
//    if (count) printf("%d ", a[1]);//����Ҫ�ж�count��ֵ��Ϊ0�������ֵ�Ĵ���
//    else printf("N ");
//    if (a[2] != 0) printf("%d ", a[2]);
//    else printf("N ");
//    if (a[3] != 0) printf("%.1f ", a[3] * 1.0 / count2);
//    else printf("N ");
//    if (a[4] != 0) printf("%d", a[4]);
//    else printf("N");
//}
