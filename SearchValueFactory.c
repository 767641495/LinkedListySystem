#include "LinkList.c"

void SearchValueFactory(LinkList p)
{
    if (p == NULL || p->next == NULL)
    {
        printf(RED"	The list is empty!\n\n"NONE);
        return;
    }
    printf("	Please input a number ∈ [0,1000000] to search:");
    int value = Read(0, 1000000);
    int location = 0;
    LinkList temp = p;
    int flag = 0;
    while (temp->next)
    {
        temp = temp->next;
        if (temp->data == value)
        {
            flag = 1;
            break;
        }
        location++;
    }
    if (flag == 1)
        printf(GREEN "	The location of %d in the sequence list is: %d\n\n" NONE, value, location + 1);
    else
        printf(RED "	The location of %d in the sequence list is NULL!\n\n" NONE, value);
}