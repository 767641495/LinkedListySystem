#include "Factory.h"

LinkList Factory(LinkList p, int option)
{
    switch (option)
    {
    case 1:
        p = CreateFactory(p);
        break;
    case 2:
        ShowFactory(p);
        break;
    case 3:
        p = ClearFactory(p);
        break;
    case 4:
        p = SortFactory(p);
        break;
    case 5:
        SearchLocationFactory(p);
        break;
    case 6:
        SearchValueFactory(p);
        break;
    case 7:
        p = InsertLocationFactory(p);
        break;
    case 8:
        p = DeleteLocationFactory(p);
        break;
    case 9:
        p = DeleteValueFactory(p);
        break;
    case 10:
        p = DeleteDuplicateFactory(p);
        break;
    case 11:
        p = ReverseListFactory(p);
        break;
    case 12:
        p = PartitionListFactory(p);
        break;
    case 13:
        p = ImportFactory(p);
        break;
    case 14:
        ExportFactory(p);
        break;
    case 15:
        MaxPlatformFactory(p);
        break;
    case 16:
        ExitFactory();
        break;
    }
    return p;
}