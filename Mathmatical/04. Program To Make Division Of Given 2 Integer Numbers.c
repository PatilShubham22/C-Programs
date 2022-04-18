/// Program To Make Division Of Given 2 Integer Numbers

#include<stdio.h>

int main()
{
	
	int   num1 = 0, num2 = 0, sum = 0;
	
	printf("\n Enter Any 2 Integer number To Make Division = \n");
	scanf("%d%d",&num1,&num2);
	
	sum = num1 / num2;
	
	printf("\n\n(%d) / (%d) = %d", num1, num2, sum);
	
return 0;
}	
	