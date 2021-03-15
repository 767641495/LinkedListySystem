#include "LinkList.c"

LinkList ReverseListFactory(LinkList p)
{
    if (p == NULL || p->next == NULL)
    {
        printf(RED"	The list is empty!\n\n"NONE);
        return p;
    }
    printf(GREEN "	The link before inversion is:\n\n" NONE);
    Show(p);
    DataElem *a = (DataElem *)malloc(getCount(p) * sizeof(DataElem));
    int i = 0;
    LinkList temp = p->next;
    while(temp)
    {
        a[i++] = temp->data;
        temp = temp->next;
    }
    temp = p->next;
    while(temp)
    {
        temp->data = a[--i];
        temp = temp->next;
    }
    printf(GREEN "	The link after inversion is:\n\n" NONE);
    Show(p);
    return p;
}