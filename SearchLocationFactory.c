#include "LinkList.c"

void SearchLocationFactory(LinkList p)
{
    if (p == NULL || p->next == NULL)
    {
        printf(RED"	The list is empty!\n\n"NONE);
        return;
    }
    int size = getCount(p);
    printf("	Please input a location[1,%d] to search:", size);
    int location = Read(1, size);
    printf(GREEN "	The value of %d in the link list is: %d\n\n" NONE, location, getElem(p,location));
}