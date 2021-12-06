#define _CRT_SECURE_NO_WARNINGS 1

//441. ����Ӳ��
//
int arrangeCoins(int n) {
    if (n == 1)
        return 1;
    int i = 0;
    for (i = 1; i <= n; i++)
    {
        n -= i;
    }
    return i - 1;
}

//448. �ҵ�������������ʧ������
//
int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) {
    int* ret = (int*)calloc(numsSize, sizeof(int));
    for (int i = 0; i < numsSize; i++)
    {
        ++ret[nums[i] - 1];
    }
    *returnSize = 0;
    for (int i = 0; i < numsSize; i++)
    {
        if (ret[i] == 0)
        {
            ret[*returnSize] = i + 1;
            (*returnSize)++;
        }
    }
    return ret;
}

//461. ��������
//
int hammingDistance(int x, int y) {
    int ret = 0;
    while (x || y)
    {
        int tx = x & 1;
        int ty = y & 1;
        if (tx ^ ty == 1)
            ret++;

        x /= 2;
        y /= 2;
    }
    return ret;
}



