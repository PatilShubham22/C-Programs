/// Array of 7 Elements with Initialization & Accept All Elements & Display All Elements - using Function

#include<stdio.h>

void Accept_Array(int Num[]);
void Create_Array(int Arr[]);

int main()
{
	
	int Values[7] = {0};
	
	Accept_Array(Values);
	
	Create_Array(Values);
	
	return 0;
	
}	

void Accept_Array(int (Num[ ]))
{		
	printf("Enter Element No 1 = ");
	scanf("%d",&Num[0]);
	
	printf("Enter Element No 2 = ");
	scanf("%d",&Num[1]);
	
	printf("Enter Element No 3 = ");
	scanf("%d",&Num[2]);
	
	printf("Enter Element No 4 = ");
	scanf("%d",&Num[3]);
	
	printf("Enter Element No 5 = ");
	scanf("%d",&Num[4]);
	
	printf("Enter Element No 6 = ");
	scanf("%d",&Num[5]);
	
	printf("Enter Element No 7 = ");
	scanf("%d",&Num[6]);
	
	return;
}	
	
void Create_Array(int Arr [ ])
{	
	printf("\n\n**************************************\n\n");
	
	printf("\n Elements in Array Are =>\n");
	
	printf("\n value of 1st Element = %d", Arr[0]);
	printf("\n value of 2nd Element = %d", Arr[1]);
	printf("\n value of 3rd Element = %d", Arr[2]);
	printf("\n value of 4th Element = %d", Arr[3]);
	printf("\n value of 5th Element = %d", Arr[4]);
	printf("\n value of 6th Element = %d", Arr[5]);
	printf("\n value of 7th Element = %d", Arr[6]);
	
	printf("\n\n\n**************************************");
	
return;
}	
	