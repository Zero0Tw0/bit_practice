#define _CRT_SECURE_NO_WARNINGS 1

//17.04 ��ʧ������
int missingNumber(int* nums, int numsSize) {
    int ans = 0;
    int i = 0;
    for (i = 0; i < numsSize; i++)
    {
        ans = ans ^ i ^ nums[i];
    }
    ans ^= i;
    return ans;
}



//��ָ Offer 56 - I. ���������ֳ��ֵĴ���
//
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* singleNumbers(int* nums, int numsSize, int* returnSize) {
    int tmp = 0, ans = 0;
    int* ret = (int*)calloc(2, sizeof(int));
    int i;
    for (i = 0; i < numsSize; i++)
    {
        ans ^= nums[i]; //��nums������������� 
    }
    for (i = 0; (1 << i) <= ans; i++)
    {
        tmp = ans;
        tmp |= (1 << i);
        if (tmp == ans)  //��������ԭ�����,˵����λΪ1,�����������ڸ�λ��ͬ����¼��λ
        {
            break;
        }
    }

    for (int j = 0; j < numsSize; j++)
    {
        tmp = nums[j];
        tmp |= (1 << i);
        if (tmp != nums[j])         //��nums��iλ��Ϊ1�����ret[1]��
        {                           //iλ��Ϊ0�����ret[0]
            ret[0] ^= nums[j];
        }
        else
        {
            ret[1] ^= nums[j];
        }
    }
    *returnSize = 2;
    return ret;
}