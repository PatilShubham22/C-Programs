/// Program To Print Pattern N

#include<stdio.h>

int main ()
{
	
	int  iValue = 0;
	
	printf("\n Enter Row & Column Value = ");
	scanf("%d",&iValue);
	
	 for(int i = 1; i <= iValue; i++)
	 {
	 	for(int j = 1; j <= iValue; j++)
	 	{
	 		if(j == 1 || j == iValue || i == j )
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