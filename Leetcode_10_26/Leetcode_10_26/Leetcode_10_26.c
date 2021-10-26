#define _CRT_SECURE_NO_WARNINGS 1

//138. 复制带随机指针的链表
//
struct Node* copyRandomList(struct Node* head) {    //error:10_26
    if (head == NULL)
        return NULL;
    struct Node* headcur = head;
    while (headcur)
    {
        struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
        newnode->next = headcur->next;
        headcur->next = newnode;
        newnode->random = NULL;
        headcur = newnode->next;
    }
    headcur = head;
    struct Node* copycur = headcur->next;
    while (headcur)
    {
        struct Node* copyrandom = headcur->random;
        if (copyrandom == NULL)
        {
            copycur->random = copyrandom;
        }
        else
        {
            copyrandom = copyrandom->next;
            copycur->random = copyrandom;
        }

    }
    return NULL;
}