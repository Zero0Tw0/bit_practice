#define _CRT_SECURE_NO_WARNINGS 1

//17.04 ÏûÊ§µÄÊı×Ö
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

//