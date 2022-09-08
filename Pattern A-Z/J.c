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
            if(i == 1 || j == (x / 2 + 1) || j <= (x / 2) && i == x || i >= (x / 2 + 2) && j == 1)
            {
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
