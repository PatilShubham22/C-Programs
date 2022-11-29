#include<stdio.h>
#include<stdlib.h>

int Add(int, int);
int Sub(int, int);
int Mult(int, int);
int Div(int, int);

int main()
{
    int No1 = 0, No2 = 0, Ans = 0;
    char Choice = '\0', Opt = '\0';

    printf("***********Calculator************\n\n");

    UP:

    printf("\n Enter First Number = ");
    scanf("%d",&No1);

    printf("\n Enter Second Number = ");
    scanf("%d",&No2);

    fflush(stdin);

    printf("\n\t\t A = Addition");
    printf("\n\t\t B = Subtract");
    printf("\n\t\t C = Multiplication");
    printf("\n\t\t D = Division");

    printf("\n\n Enter Your Choice => ");
    scanf("%c",&Choice);


    if(Choice == 'A' || Choice == 'a')
    {
        Ans = Add(No1,No2);
    }
    else if(Choice == 'B' || Choice == 'b')
    {
        Ans = Sub(No1,No2);
    }
    else if(Choice == 'C' || Choice == 'c')
    {
        Ans = Mult(No1,No2);
    }
    else if(Choice == 'D' || Choice == 'd')
    {
        Ans = Div(No1,No2);
    }

    printf("\n************************\n");
    printf("\n Answer = %d",Ans);
    printf("\n\n****************************");

    printf("\n Do you Want to perform Another Operation ?(Y/N)");

    fflush(stdin);

    printf("\n\n Enter Your Option = ");
    scanf("%c",&Opt);

    system("cls");

    if(Opt == 'Y' || Opt == 'y')
    {
        goto UP;
    }
    else if(Opt == 'N' || Opt == 'n')
    {
        printf("\n\n Thank You...");
    }

  return 0;
}

 int Add(Num1, Num2)
{
    int Ans = 0;

    Ans = Num1 + Num2;

  return Ans;
}

int Sub(Num1, Num2)
{
    int Ans = 0;

    Ans = Num1 - Num2;

  return Ans;
}

int Mult(Num1, Num2)
{
    int Ans = 0;

    Ans = Num1 * Num2;

  return Ans;
}

int Div(Num1, Num2)
{
    int Ans = 0;

    Ans = Num1 / Num2;

  return Ans;
}

