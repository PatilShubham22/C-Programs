#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 21, Num = 50;

    int *Ptr1 = &No;
    int *Ptr2 = &Num;

    printf("\n Value of No = %d",No);
    printf("\n Address of No = %d",&No);
    printf("\n Value of No Using Ptr1 = %d",*Ptr1);
    printf("\n Address of No using Ptr1 = %d",Ptr1);
    printf("\n address of Ptr1 = %d",&Ptr1);
    printf("\n");
    getch();
    printf("\n Value of Num = %d",Num);
    printf("\n Address of Num = %d",&Num);
    printf("\n Value of No Using Ptr2 = %d",*Ptr2);
    printf("\n Address of No using Ptr2 = %d",Ptr2);
    printf("\n address of Ptr2 = %d",&Ptr2);

  return 0;
}
