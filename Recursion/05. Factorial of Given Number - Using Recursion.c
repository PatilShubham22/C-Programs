#include<stdio.h>

int Factorial(int Num);

int main()
{
    int No = 0, Fact = 0;

    printf("Enter a Number = ");
    scanf("%d",&No);

    Fact = Factorial(No);

    printf("\n Factorial of %d = %d",No,Fact);

  return 0;
}

int Factorial(int Num)
{
    static int Res = 1;

    if(Num > 1)
    {
        Res = Factorial(Num - 1);
    }

    return Res * Num;
}
