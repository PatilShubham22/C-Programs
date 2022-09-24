#include<stdio.h>

int Sum_of_Five();

int main()
{
    int Res = 0;

    printf("Enter 5 Integers to Calculate there Addition \n");

    Res = Sum_of_Five();

    printf("\n Sum of 5 Calculated Numbers = %d",Res);

  return 0;
}

int Sum_of_Five()
{
    static int i = 0, Sum = 0;
    int Num = 0;

    while(i < 5)
    {
        printf("\n Number %d = ",++i);
        scanf("%d",&Num);

        Sum = Sum_of_Five() + Num;
    }
   return Sum;
}
