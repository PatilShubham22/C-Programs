#include<stdio.h>

int main()
{
    int i = 0, j = 0, x = 0,flag = 1;

    printf("\n Enter Row & Column Number = ");
    scanf("%d",&x);

    for(i = 1; i <= x; i++)
    {
        for(j = 1; j <= x+x+1; j++)
        {
            //if(i <= (x / 2 + 1) && i + j > (x / 2 + 1) && j - i <= (x / 2))
            if(j >= (x - i) + 2  && j <= (x+i))
            {
                if(flag)
                {
                    printf("*");
                    flag = 0;
                }
                else
                {
                    printf(" ");
                    flag = 1;
                }
            }
            else
            {
                printf(" ");
                flag = 1;
            }
        }
       printf("\n");
    }
  return 0;
}
