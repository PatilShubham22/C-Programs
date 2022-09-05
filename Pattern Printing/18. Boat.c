#include<stdio.h>

int main()
{
    int i = 0, j = 0, x = 0;

    printf("Enter Row & Column Number = ");
    scanf("%d",&x);

    for(i = 1; i <= x; i++)
    {
        printf("\t\t\t\t\t");
        for(j = 1; j <= x*2 + x*2 + 1; j++)
        {
            if(j == x+x+1 && i == 1 || j >= (x+x-i) + 2 && j <= (x+x+i) || i > (x / 2 + 1) && j >= i - (x / 2 + 1) && j <= (x*2 + x*2 + 1)-i + (x / 2 + 2))
            {
                for(int k = 0; k <= 10000000; k++){}
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
       printf("\n");
    }
  return 0;
}
