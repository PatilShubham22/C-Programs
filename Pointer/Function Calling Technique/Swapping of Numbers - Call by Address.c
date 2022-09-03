#include<stdio.h>
#include<conio.h>

void Swap(int*, int*);

int main()
{
    int No1 = 0, No2 = 0;

    printf("\n Enter 2 Numbers = ");
    scanf("%d%d",&No1,&No2);

    printf("\n Inside main() - Given Numbers Before Swap = %d, %d",No1, No2);

    Swap(&No1,&No2);

    getch();

    printf("\n\n Inside main() - Given Numbers After Swap = %d, %d",No1, No2);

  return 0;
}

void Swap(int *P1, int *P2)
{
    int Temp = 0;

    Temp = *P1;
    *P1 = *P2;
    *P2 = Temp;
}
