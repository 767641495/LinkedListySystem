#include "LinkList.c"

LinkList DeleteDuplicateFactory(LinkList p)
{
    if (p == NULL || p->next == NULL)
    {
        printf(RED "	The list is empty!\n\n" NONE);
        return p;
    }
    int *Map;
    Map = (DataElem *)malloc(100 * sizeof(DataElem));
    int i = 0;
    int MapLength = 100;
    while (i < 100)
        Map[i++] = 0;
    i = 0;
    LinkList before = p;
    LinkList aim = before->next;
    while (aim != NULL)
    {
        if (aim->data >= MapLength)
        {
            Map = (DataElem *)realloc(Map, (aim->data + 1) * sizeof(DataElem));
            while (MapLength < aim->data + 1)
                Map[MapLength++] = 0;
        }
        if (Map[aim->data] == 0)
        {
            Map[aim->data] = 1;
            before = aim;
            aim = before->next;
        }
        else
        {
            before->next = aim->next;
            free(aim);
            aim = before->next;
        }
    }
    printf(GREEN "	All the dunlenents have been deleted.\n\n" NONE);
    Show(p);
    return p;
}