#include "LinkList.c"

void MaxPlatformFactory(LinkList p)
{
    if (p == NULL || p->next == NULL)
    {
        printf(GREEN "	The max platform is : 0\n\n" NONE);
        return;
    }
    int ans = 1;
    int cnt = 0;
    LinkList temp = p->next;
    int before = temp->data;
    temp = temp->next;
    while (temp)
    {
        if (temp->data == before)
            cnt++;
        else
        {
            ans = cnt > ans ? cnt : ans;
            cnt = 1;
            before = temp->data;
        }
        temp = temp->next;
    }
    ans = cnt > ans ? cnt : ans;
    printf(GREEN "	The max platform is : %d\n\n" NONE, ans);
}