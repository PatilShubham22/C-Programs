#include<stdio.h>

int main()
{
    int iNo = 21, *iPtr1 = &iNo, *iPtr2 = &iNo;

    printf("\n Value of iNo using its pointer iPtr1 = %d", *iPtr1);
    printf("\n Address of iNo using iPtr1 = %d", iPtr1);
    printf("\n Address of iPtr1 = %d", &iPtr1);

    printf("\n Value of variable using its pointer iPtr2 = %d", *iPtr2);
    printf("\n Address of variable using iPtr2 = %d", iPtr2);
    printf("\n Address of iPtr2 = %d", &iPtr2);
    getch();

    iNo = 55;
    printf("\n****************************************\n");

    printf("\n New value of iNo using its pointer iPtr1 = %d", *iPtr1);
    printf("\n New value of variable using its pointer iPtr2 = %d", *iPtr2);
    printf("\n******************************************\n");
    getch();

    *iPtr1 = 101;

    printf("\n New value of iNo = %d", iNo);
    printf("\n Value of iNo using its pointer iPtr1 = %d", *iPtr1);
    printf("\n Value of variable using its pointer iPtr2 = %d", *iPtr2);
    printf("\n*********************************************\n");

    return 0;
}
