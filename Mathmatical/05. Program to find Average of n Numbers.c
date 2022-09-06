#include<stdio.h>

int main()
{
    int No = 0, i = 0;
    float x = 0, Sum = 0;

    printf("\n Enter Number of Elements = ");
    scanf("%d",&No);

    printf("\n Enter %d Elements\n",No);

    for(i = 1; i <= No; i++)
    {
        scanf("%f",&x);
        Sum = Sum + x;
    }

    printf("\n\n %f ",(Sum/No));

  return 0;
}
