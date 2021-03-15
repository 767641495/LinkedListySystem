#include "LinkList.c"

LinkList PartitionListFactory(LinkList p)
{
    if (p == NULL || p->next == NULL)
    {
        printf(RED"	The list is empty!\n\n"NONE);
        return p;
    }
    printf("	The link before partition:");
    int value = Read(0, 1000000);
    printf(GREEN "	The sequence after partition by %d:\n\n" NONE, value);
    Show(p);
    LinkList left = (LinkList)malloc(sizeof(ListNode));
    LinkList right = (LinkList)malloc(sizeof(ListNode));
    LinkList now = p->next;
    LinkList leftFront = left;
    LinkList rightFront = right;
    while (now != NULL)
    {
        if (now->data > value)
        {
            right->next = now;
            right = right->next;
        }
        else
        {
            left->next = now;
            left = left->next;
        }
        now = now->next;
    }
    left->next = rightFront->next;
    right->next = NULL;
    printf(GREEN "	The sequence after partiton by %d:\n\n" NONE, value);
    Show(leftFront);
    return leftFront;
}