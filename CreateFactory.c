#include "LinkList.c"

LinkList CreateFactory(LinkList p)
{
    p = Create(60);
    printf(GREEN "	The linked list has been created and initiated by 60 random numbers:\n\n" NONE);
    Show(p);
    return p;
}