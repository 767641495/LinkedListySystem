#ifndef LinkList_C
#define LinkList_C
#include "LinkList.h"

LinkList Create(int iSize) //创建链表,以0~99填充
{
    LinkList p = (LinkList)malloc(sizeof(ListNode));
    LinkList temp = p;
    int i;
    for (i = 1; i <= iSize; i++)
    {
        LinkList a = (LinkList)malloc(sizeof(ListNode));
        a->data = rand() % 100;
        a->next = NULL;
        temp->next = a;
        temp = temp->next;
    }
    return p;
}

int getElem(LinkList p, int i)
//获取链表p中第i个元素的值
{
    LinkList q = p->next;
    int j = 1;
    while (q && j < i)
        q = q->next, ++j;
    if (!q || j > i)
        return -1;
    return q->data;
}

int getCount(LinkList p)
{
    if (p == NULL || p->next == NULL)
        return 0;
    LinkList temp = p->next;
    int count = 1;
    while (temp->next != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}

void Show(LinkList p) //显示链表
{
    if (p == NULL || p->next == NULL)
    {
        printf(RED "	The list is empty!\n\n" NONE);
        return;
    }
    LinkList temp = p;
    while (temp->next)
    {
        int j = 0;
        printf("	");
        while (j++ < 10 && temp->next)
        {
            temp = temp->next;
            printf("%-8d", temp->data);
        }
        puts("");
    }
    puts("");
}

#endif