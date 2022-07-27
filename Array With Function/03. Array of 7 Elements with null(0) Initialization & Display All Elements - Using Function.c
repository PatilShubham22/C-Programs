/// Array of 7 Elements with null(0) Initialization & Display All Elements - Using Function

#include<stdio.h>

int  Values[7] = {0};
void Create_Array();

int main()
{
	Create_Array();
	
return 0;
}	
	
void Create_Array()
{

	printf("**************************************\n\n");
	
	printf("\n value of 1st Element = %d", Values[0]);
	printf("\n value of 2nd Element = %d", Values[1]);
	printf("\n value of 3rd Element = %d", Values[2]);
	printf("\n value of 4th Element = %d", Values[3]);
	printf("\n value of 5th Element = %d", Values[4]);
	printf("\n value of 6th Element = %d", Values[5]);
	printf("\n value of 7th Element = %d", Values[6]);
	
	printf("\n\n\n**************************************");
	
	return;
}											
																																