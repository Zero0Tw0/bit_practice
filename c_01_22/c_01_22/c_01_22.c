#define _CRT_SECURE_NO_WARNINGS 1

//1171. ��������ɾȥ�ܺ�ֵΪ��������ڵ�
//
struct ListNode* removeZeroSumSublists(struct ListNode* head) {
    struct ListNode nhead;
    nhead.next = head;
    struct ListNode* cur;
    struct ListNode* tail;
    //nhead->next = head;
    int flag = 0;
    //struct ListNode* ret1;
    for (cur = head; cur != NULL; )
    {
        int sum = 0;
        for (tail = cur; tail != NULL; tail = tail->next)
        {
            sum += tail->val;
            if (sum == 0)
            {
                break;
            }
        }
        if (sum == 0)
        {
            //ɾ��[head,tail]����Ľ��
            //1.����������ҿ�[head,tail)
            tail = tail->next;
            //2.��Ҫɾ������ǰһ���
            struct ListNode* tmp = &nhead;
            while (tmp->next != cur)
            {
                tmp = tmp->next;
            }
            //3.ɾ�����
            while (cur != tail)
            {
                tmp->next = cur->next;
                //free(cur);
                cur = tmp->next;
            }
            //break;
            flag = 1;
        }
        if (flag == 1)
        {
            flag = 0;
        }
        else
        {
            cur = cur->next;
        }
    }
    return nhead.next;
}

//NC21 ������ָ�����䷴ת
//
struct ListNode* ReverseList(struct ListNode* Rhead, struct ListNode* Rtail)
{
    struct ListNode* Rprev = NULL;
    struct ListNode* Rnext = NULL;
    while (Rhead != Rtail)
    {
        Rnext = Rhead->next;
        Rhead->next = Rprev;
        Rprev = Rhead;
        Rhead = Rnext;
    }
    Rhead->next = Rprev;
    return Rhead;
}


struct ListNode* reverseBetween(struct ListNode* head, int m, int n) {
    struct ListNode* prev = (struct ListNode*)malloc(sizeof(struct ListNode));
    struct ListNode* next;
    struct ListNode* Rhead = head;
    struct ListNode* Rtail = head;
    int flag = 0;
    if (m == 1)
    {
        flag = 1;
    }
    prev->next = head;
    if (m == n)
    {
        return head;
    }
    while (m != 1)
    {
        Rhead = Rhead->next;
        m--;
    }
    while (n != 1)
    {
        Rtail = Rtail->next;
        n--;
    }
    while (prev->next != Rhead)
    {
        prev = prev->next;
    }
    next = Rtail->next;
    //��ת����
    struct ListNode* tmp = ReverseList(Rhead, Rtail);
    //����ǰ��
    prev->next = tmp;
    //���Ӻ���
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = next;
    if (flag == 1)
    {
        return prev->next;
    }
    return head;
}

