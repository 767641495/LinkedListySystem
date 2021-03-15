#ifndef SeqList_C
#define SeqList_C

#include "LinkedList.c"

typedef int DataElem;
typedef struct SeqList
{
    DataElem *pDatas; //存放元素表的缓冲区指针
    int iSize;        //缓冲区大小
    int iLength;      //上限
} SeqList;

SeqList ExchangeToSeqList(LinkedList *p)
{
    SeqList list;
    LinkedList *temp = p;
    int iSize = getCount(p);
    list.pDatas = (DataElem *)malloc(iSize * sizeof(DataElem));
    list.iSize = iSize;
    if (list.pDatas == NULL)
        list.iSize = 0;
    int i;
    for (i = 0; i < iSize; i++)
    {
        temp = temp->next;
        list.pDatas[i] = temp->data;
    }
    list.iLength = iSize;
    return list;
}

LinkedList *ExchangeToLinkedList(SeqList list) //创建链表,以0~99填充
{
    LinkedList *p = (LinkedList *)malloc(ListInitSize * sizeof(LinkedList));
    LinkedList *temp = p;                                        //
    srand(time(NULL));
    int i;
    for (i = 0; i < list.iSize; i++)
    {
        LinkedList *a = (LinkedList *)malloc(sizeof(LinkedList));
        a->data = list.pDatas[i];
        a->next = NULL;
        temp->next = a;
        temp = temp->next;
    }
    return p;
}
#endif