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
            if(j == 1 || i == 3 && j == 2 || i == 2 && j == 3 || i == 1 && j == 4 || i == 5 && j == 2 || i == 6 && j == 3 || i == x && j == 4)
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
