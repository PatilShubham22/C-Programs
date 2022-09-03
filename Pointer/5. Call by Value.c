#include<stdio.h>
#include<conio.h>

void ValueIncr(int No);

int main()
{
    int Num = 0;

    printf("\n Enter a Value = ");
    scanf("%d",&Num);

    ValueIncr(Num);

    printf("\n\n Back inside main()\n Press any key to see new value");
    getch();

    printf("\n\n Value of given number after function call = %d",Num);

    getch();
    return 0;
}

void ValueIncr(int No)
{
    printf("\n Welcome inside function, Value Received = %d",No);

    No++;

    printf("\n Bye bye Value changed by Function = %d",No);
}
