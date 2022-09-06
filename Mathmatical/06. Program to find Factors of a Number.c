#include<stdio.h>

int main()
{
    int No = 0, i = 0;

    printf("\n Enter a Number = ");
    scanf("%d",&No);

    printf("\n Factors of %d are \n",No);

    for(i = 1; i < No; i++)
    {
        if(No % i == 0)
        {
            printf("\n\t\t\t %d",i);
        }
    }
  return 0;
}
