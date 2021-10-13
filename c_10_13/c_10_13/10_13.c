#define _CRT_SECURE_NO_WARNINGS 1


//189. ��ת����
//
void leftremove(int* left, int* right)
{
    int tmp;
    while (left < right)
    {
        tmp = *left;
        *left = *right;
        *right = tmp;
        left++;
        right--;
    }
}

void rotate(int* nums, int numsSize, int k) {
    k %= numsSize;
    leftremove(nums, nums + numsSize - k - 1);
    leftremove(nums + numsSize - k, nums + numsSize - 1);
    leftremove(nums, nums + numsSize - 1);
}



//189.��ת����_10_13
//
void exchange(int* left, int* right)         //��������
{
    int tmp;
    while (left < right)
    {
        tmp = *left;
        *left = *right;
        *right = tmp;
        left++;
        right--;
    }
}

void rotate(int* nums, int numsSize, int k) {
    k %= numsSize;
    exchange(nums + numsSize - k, nums + numsSize - 1); //��k��������
    exchange(nums, nums + numsSize - k - 1);            //ǰnumsSize-k��������
    exchange(nums, nums + numsSize - 1);                //�������齻��
}



//88. �ϲ�������������
//
void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int* cur1 = nums1 + m - 1;
    int* cur2 = nums2 + n - 1;
    int* tail = nums1 + m + n - 1;
    while (cur1 != nums1 - 1 && cur2 != nums2 - 1)
        if ((*cur1) >= (*cur2))
        {
            *tail = *cur1;
            tail--;
            cur1--;
        }
        else
        {
            *tail = *cur2;
            tail--;
            cur2--;
        }
    if (cur1 == nums1 - 1)
    {
        while (cur2 != nums2 - 1)
        {
            *tail = *cur2;
            tail--;
            cur2--;
        }
    }
}


//88. �ϲ�������������_10_13
//
void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    //���ĴӺ���ǰ�������������ݵ��ƶ����µ�ʱ�临�Ӷ�����
    int* cur1 = nums1 + m - 1;          //ָ��nums1�Ѵ����ݵ�β��
    int* cur2 = nums2 + n - 1;          //ָ��nums2��β��
    int* tail = nums1 + m + n - 1;      //ָ��nums1��β��
    while (cur1 != nums1 - 1 && cur2 != nums2 - 1)  //��cur1��cur2��û�ߵ�������ͷ��
    {
        if (*cur1 > *cur2)          //��*cur1>*cur2��*cur1������nums1β��
        {
            *tail = *cur1;
            cur1--;
            tail--;
        }
        else                        //��*cur1<*cur2��*cur2������nums1β��
        {
            *tail = *cur2;
            cur2--;
            tail--;
        }
    }
    while (cur2 != nums2 - 1)       //��cur2û�ߵ�ͷ��֤����û�н�nums2������
    {                               //ȫ������nums1�У�����Ҫ��������
        *tail = *cur2;
        cur2--;
        tail--;
    }
}



//26. ɾ�����������е��ظ���_10_13
//
int removeDuplicates(int* nums, int numsSize) {
    //���ģ�ͨ��˫ָ��ʵ��ԭ�ؿ����Լ�ʱ�临�Ӷ�ΪO(n)
    int* dest = nums;
    int* sroc = nums;
    if (numsSize == 0)                  //�������Ϊ�շ���0
        return 0;
    while (sroc < nums + numsSize)      //��srocָ������������
    {
        if (*dest != *sroc)             //���*dest��*sroc����
        {
            dest++;                     //destָ����һλ 
            *dest = *sroc;              //sroc�����ݸ�dest
            sroc++;                     //srocָ����һλ
        }
        else
        {
            sroc++;                     //���*dest��*sroc��ȣ�srocָ����һλ
        }
    }
    return dest - nums + 1;
}



//27. �Ƴ�Ԫ��
//
int removeElement(int* nums, int numsSize, int val) {
    int* cur = nums;
    int* pre = nums;
    for (int i = 0; i < numsSize; i++)
    {
        if (*cur == val)
        {
            cur++;
        }
        else
        {
            *pre = *cur;
            pre++;
            cur++;
        }
    }
    return pre - nums;
}



//27. �Ƴ�Ԫ��
//
int removeElement(int* nums, int numsSize, int val) {
    //���ģ�ͨ��˫ָ��ʵ��ԭ��ɾ��
    int* dest = nums;
    int* sroc = nums;
    while (sroc < nums + numsSize)      //��srocָ������������
    {
        if (*sroc != val)               //���*sroc��val����
        {
            *dest = *sroc;              //��sroc���ݿ�����dest��
            dest++;                     //destָ����һλ
            sroc++;                     //srocָ����һλ
        }
        else
        {
            sroc++;                     //���*sroc��val�����������
        }
    }
    return dest - nums;                 //����dest��srocָ���
}
