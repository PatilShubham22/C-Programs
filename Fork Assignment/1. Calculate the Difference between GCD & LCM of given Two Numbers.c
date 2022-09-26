#include<stdio.h>

int Diff(int Num1, int Num2)
{
    int i = 0, LCM = 0, GCD = 0, Diff = 0;

    for(i = 1; i < Num1 && i < Num2; i++)
    {
        if(Num1 % i == 0 && Num2 % i == 0)
        {
            GCD = i;
        }
    }

    LCM = (Num1 * Num2) / GCD;

    Diff = LCM - GCD;

  return Diff;
}

int main()
{
    int No1 = 0, No2 = 0, Res = 0;

    printf("Enter 1st Number = ");
    scanf("%d",&No1);

    printf("\nEnter 2nd Number = ");
    scanf("%d",&No2);

    Res = Diff(No1,No2);

    printf("\n %d",Res);

  return 0;
}
