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
            if(i == j || i + j == (x + 1))
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
