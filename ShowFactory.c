#include "LinkList.c"

void ShowFactory(LinkList p)
{
    Show(p);
    printf(GREEN "	The length of the linked list is: %d\n\n" NONE, getCount(p));
}