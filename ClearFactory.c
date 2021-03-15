#include "LinkList.c"

LinkList ClearFactory(LinkList p)
{
    if (p == NULL || p->next == NULL)
        return p;
    while(p)
    {
        LinkList q = p->next;
        free(p);
        p = q;
    }
    printf(GREEN "	The current liked list has been clear.\n\n" NONE);
    return NULL;
}