#include "Factory.c"
#include "Menu.c"
#include "LinkList.c"

int main()
{
    LinkList list = NULL;
    int option = 0;
    while (option != 16)
    {
        Menu();
        option = Read(1, 16);
        list = Factory(list, option);
        system("pause");
    }
}