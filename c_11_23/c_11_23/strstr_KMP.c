#define _CRT_SECURE_NO_WARNINGS 1

#include<stdlib.h>
#include<stdio.h>
#include<malloc.h>
#include<string.h>

void GetNext(char* needle, int* Next)
{
    int NEsize = strlen(needle);
    if (NEsize >= 1)
        Next[0] = -1;
    if (NEsize >= 2)
        Next[1] = 0;


    int prev = 1;
    int cur = prev + 1;

    int k = 0;                //������֪kֵ


    while (cur < NEsize)
    {
        if (k == -1 || needle[cur - 1] == needle[k])
        {
            Next[cur] = k + 1;
            k++;
            cur++;
        }
        else
        {
            k = Next[k];
        }
    }
}

int strStr(char* haystack, char* needle) {
    if (haystack == NULL || needle == NULL)
        return 0;

    int HKsize = strlen(haystack);
    int NEsize = strlen(needle);


    if ((HKsize == 0 && NEsize == 0) || (HKsize != 0 && NEsize == 0))
    {
        return 0;
    }
    if (HKsize == 0)
    {
        return -1;
    }


    int* Next = (int*)malloc(NEsize * sizeof(int));
    GetNext(needle, Next);

    int HKcur = 0;
    int NEcur = 0;
    while (HKcur < HKsize && NEcur < NEsize)
    {
        if (NEcur == -1 || haystack[HKcur] == needle[NEcur])
        {
            HKcur++;
            NEcur++;
        }
        else
        {
            NEcur = Next[NEcur];
        }
    }

    if (NEcur >= NEsize)
    {
        free(Next);
        return HKcur - NEcur;
    }
    free(Next);
    return -1;
}

//int KMP(char* arr1, char* arr2)
//{
//    int i = 0;											//����Ҫ��¼ƥ�����λ�ã�
//    int j = 0;                                          //��Ϊkmp�㷨i����Ҫ����
//
//    int len1 = strlen(arr1);
//    int len2 = strlen(arr2);
//
//    int* Next = (int*)malloc(len2 * sizeof(int));       //ΪNext���鿪��һ�����Ӵ�һ������ 
//                                                        //�ռ�
//
//    GetNext(Next, arr2);                                //����Next�����õ�Next���������
//
//    if (len1 == 0 && len2 == 0 || len2 == 0) return 0;	//��arr1��arr2��Ϊ�ջ�arr1Ϊ��ʱֱ 
//                                                        //�ӷ���
//
//    else if (len1 == 0 || len2 > len1) return -1;		//��arr1Ϊ�ջ��ߵڶ����ַ����ȵ�һ 
//                                                        //���ַ�����
//
//    while (i < len1 && j < len2)						//��arr1��arr2��û�ߵ���ͷ
//    {
//        if (arr1[i] == arr2[j])
//        {
//            i++;
//            j++;
//        }
//        else
//        {
//            j = Next[j];						        //���������Ӵ���ͬʱj���ݵ� 
//                                                        //Next[j]��i���û���
//        }
//    }
//    if (j >= len2)
//        return i - j;							        //����Ӵ��ߵ���ͷ�������ҵ��˷��� 
//                                                        //��ʼƥ��ʱ��λ��
//    return -1;											//������������ߵ���ͷ������û�ҵ�
//}


int main()
{
    char a[] = "hello";
    char b[] = "ll";
    int ret = strStr(a, b);
    printf("%d", ret);
    return 0;
}
    