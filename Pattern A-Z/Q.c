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
            if(j >= (x / 2 - 1) && i == 2 && j <= (x / 2 + 3) && i == 2 || j >= (x / 2 - 1) && i == x - 1 && j <= (x / 2 + 3) && i == x - 1 || i >= (x / 2 - 1) && j == 2 && i <= (x / 2 + 3) && j == 2 || i >= (x / 2 - 1) && j == x - 1 && i <= (x / 2 + 3) && j == x - 1 || i == j && i + j > x + 1)
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
