///Program To Make Addition Of +ve Numbers - Using Function

#include<stdio.h>

int Sum_Calculator();

int main()
{
	int Sum = 0;
	
	printf("\n Enter Positive Numbers To Make Addition =\n ");
	
	Sum = Sum_Calculator();
	
	printf("\n Addition Of Numbers = %d", Sum);
	
	return 0;
}	

int Sum_Calculator()
{
	int No= 0, Add = 0;
	
	while(1)
	{
		scanf("%d",&No);
		
		if(No < 0)
		{
			break;
		}
		
		Add = Add + No;
	}
	
		return Add;					
}	