#include "LinkList.c"

void ExportFactory(LinkList p)
{
    FILE *fp;
    fp = fopen("listData.txt", "w");
    if (p == NULL || p->next == NULL)
    {
        printf(RED "	The list is empty!\n\n" NONE);
        fclose(fp);
        return;
    }
    LinkList temp = p->next;
    while (temp != NULL)
    {
        int j = 0;
        while (j++ < 8 && temp != NULL)
        {
            fprintf(fp, "%-3d", temp->data);
            temp = temp->next;
        }
        fprintf(fp, "\n");
    }
    fclose(fp);
    printf(GREEN "	Data output to the file success.\n\n" NONE);
    Show(p);
}