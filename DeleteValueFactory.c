#include "LinkList.c"

LinkList DeleteValueFactory(LinkList p)
{
    if (p == NULL || p->next == NULL)
    {
        printf(RED"	The list is empty!\n\n"NONE);
        return p;
    }
    int value;
    printf("	Please input a number ∈ [0,1000000] to be deleted: ");
    value = Read(0, 1000000);
    int cnt = 0;
    LinkList before = p;
    while (before->next != NULL)
    {
        if (before->next->data == value)
        {
            before->next = before->next->next;
            cnt++;
        }
        before = before->next;
    }
    printf(GREEN "	There are %d of %d deleted in the sequence list. \n\n" NONE, cnt, value);
    Show(p);
    return p;
}