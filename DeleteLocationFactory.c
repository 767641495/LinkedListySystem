#include "LinkList.c"

LinkList DeleteLocationFactory(LinkList p)
{
    if (p == NULL || p->next == NULL)
    {
        printf(RED"	The list is empty!\n\n"NONE);
        return p;
    }
    int location;
    LinkList before = p;
    int size = getCount(p);
    printf("	Please input a location to be deleted: ");
    location = Read(1, size);
    location--;
    int i;
    for (i = 0; i < location - 1; i++)
        before = before->next;
    LinkList aim = before->next;
    before->next = aim->next;
    printf(GREEN "	The location of %d in the link list has been deleted: %d\n\n" NONE, location + 1, aim->data);
    free(aim);
    Show(p);
    return p;
}