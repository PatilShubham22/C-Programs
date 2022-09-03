#include<stdio.h>
#include<stdio.h>

int main()
{
    int Num[5] = {15,65,45,98,32};
    int *Ptr = Num;

    printf("\n Base Address of array is = %d",Num);
    printf("\n Value in pointer is = %d",Ptr);
    printf("\n Value of Array element where pointer pointing = %d",*Ptr);

    getch();

    Ptr++;

    printf("\n\n New value in pointer is = %d",Ptr);
    printf("\n Value of Array element where pointer pointing = %d",*Ptr);

    return 0;
}
