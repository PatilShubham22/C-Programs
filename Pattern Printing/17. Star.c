#include<stdio.h>
void Delay()
{
    for(int k = 0; k <= 50000000; k++){}
}
int main()
{
    int i = 0, j = 0, x = 0, LtoRline = 1,RtoLline = 2, flag = 1;

    printf("\n\t\t\t\t\t\t\t\t Enter Star Size = ");
    scanf("%d",&x);

    for(i = 1; i <= x+ x + 1; i++)
    {
        printf("\t\t\t\t\t\t");
        for(j = -1; j <= x*2 + x*2 + 3; j++)
        {
            if(i > x  && j == LtoRline && flag)
            {
                Delay();
                printf("*");
                LtoRline += 4;
                flag = 0;
            }
            else if(i > x  && j == (x*2 + x*2 + 3) - (RtoLline))
            {
                Delay();
                printf("*");
                RtoLline += 4;
            }
            else if(i == x && j%2 != 0 || j == x+x+i || j == x+x-i + 2 )
            {
                Delay();
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
        flag = 1;
    }
    getch();
   return 0;
}
