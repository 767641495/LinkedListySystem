#include "LinkList.c"

LinkList SortFactory(LinkList p)
{
    if (p == NULL || p->next == NULL)
    {
        printf(RED "	The list is empty!\n\n" NONE);
        return p;
    }
    printf("	Press ENTER to sort in ascending order. Others for descending order:\n\n");
    fflush(stdin);
    char ch = getch();
    LinkList first, second;
    first = p->next;
    if ((int)ch == 13)
    {
        while (first != NULL)
        {
            second = first->next;
            while (second != NULL)
            {
                if (first->data > second->data)
                {
                    int temp = first->data;
                    first->data = second->data;
                    second->data = temp;
                }
                second = second->next;
            }
            first = first->next;
        }
        printf(GREEN "	The sorted list in ascending order is:\n\n" NONE);
    }
    else
    {
        while (first != NULL)
        {
            second = first->next;
            while (second != NULL)
            {
                if (first->data < second->data)
                {
                    int temp = first->data;
                    first->data = second->data;
                    second->data = temp;
                }
                second = second->next;
            }
            first = first->next;
        }
        printf(GREEN "	The sorted list in descending order is:\n\n" NONE);
    }
    Show(p);
    return p;
}