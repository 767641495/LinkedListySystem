#include "LinkList.c"

LinkList InsertLocationFactory(LinkList p)
{
    int location;
    int size = getCount(p);
    printf("	Please input the location to be inserted: ");
    location = Read(1, size + 1);
    location--;
    printf("	Please input a nunber ∈ [0,1000000] to be inserted: ");
    LinkList temp = (LinkList)malloc(sizeof(ListNode));
    temp->data = Read(0, 1000000);
    LinkList before = p;
    int i;
    for (i = 0; i < location; i++)
        before = before->next;
    LinkList after = before->next;
    temp->next = after;
    before->next = temp;
    printf(YELLOW "	Insertion Success\n\n" NONE);
    Show(p);
    return p;
}