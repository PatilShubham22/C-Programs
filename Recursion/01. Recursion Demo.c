#include<stdio.h>

void Fun();

int main()
{
    printf("\n Hello!!!");
    getch();

    Fun();

    getch();

   return 0;
}

void Fun()
{
    int  i = 0;

    i++;

    printf("\n Fun() Functions Call No = %d",i);
    getch();

    Fun();
}
