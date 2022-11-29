#include<stdio.h>
#include<stdlib.h>

int main()
{
    int No1 = 0, No2 = 0, Ans = 0;
    char Sign = '\0';

    printf("***********Calculator***********\n\n");

    scanf("%d %c %d",&No1,&Sign,&No2);

    if(Sign == '+')
    {
        Ans = No1 + No2;
        printf("\n\n %d + %d = %d",No1, No2,Ans);
    }
    else if(Sign == '-')
    {
        Ans = No1 - No2;
        printf("\n\n %d - %d = %d",No1, No2,Ans);
    }
    else if(Sign == '*')
    {
        Ans = No1 * No2;
        printf("\n\n %d * %d = %d",No1, No2,Ans);
    }
    else if(Sign == '/')
    {
        Ans = No1 / No2;
        printf("\n\n %d / %d = %d",No1, No2,Ans);
    }

  return 0;
}
