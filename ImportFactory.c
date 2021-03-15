#include "LinkList.c"

LinkList ImportFactory(LinkList p)
{
    FILE *fp;
    fp = fopen("listData.txt", "r");
    LinkList temp = p;
    int num = 0;
    while (fscanf(fp, "%d", &num) != EOF)
    {
        temp = temp->next;
        temp->data = num;
    }
    temp->next = NULL;
    fclose(fp);
    printf(GREEN "	Data imported from the “listData.txt” success.\n\n" NONE);
    Show(p);
    return p;
}