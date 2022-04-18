///Program To Print Sum Of 10 Inputted Numbers

#include<stdio.h>

int main()
{
	int i = 0, No = 0, Sum =0;
	
	for(i = 1; i <= 10; i++)
	{
		printf("\n Enter Number %d = ", i);
		scanf("%d",&No);
		
		Sum = Sum + No;
		
		if((No == 0) || (No < 0))
		{
	       	break;
		}
	}
    
    printf("\n Addition Of Given Numbers = %d",Sum);	
	
return 0;
}