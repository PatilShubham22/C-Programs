///Program To Print Total Of Given Number Of Bills

#include<stdio.h>

int main()
{
	int i = 0, Cnt = 0, Amount = 0, Bill_Sum = 0;
	
	printf("\n Enter How Many Bills You Have =");
	scanf("%d",&Cnt);
	
	for(i = 1; i <= Cnt; i++)
	{
		printf("\n Enter Amount Of Bill Number %d =", i);
		scanf("%d",&Amount);
		
		Bill_Sum = Bill_Sum +Amount;
	}
	
	printf("\n Total Of Bills = %d", Bill_Sum);
	
	
	
return 0;
}