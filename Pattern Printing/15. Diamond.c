#include<stdio.h>

int main()
{
    int i = 0, j = 0, x = 0;

    printf("\n Enter Row & Column Number = ");
    scanf("%d",&x);

    for(i = 1; i <= x; i++)
    {
        for(j = 1; j <= x; j++)
        {
            if(i + j > (x / 2) +1 && i + j <= (x+x) -(x/2) && j - i < x/2 +1 && i - j < x/2 +1)
            {
                for(int k = 0; k <= 50000000; k++){}
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
      printf("\n");
    }
   return 0;
}
