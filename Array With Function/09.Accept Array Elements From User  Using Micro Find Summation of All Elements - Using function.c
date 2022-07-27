/// Accept Array Elements From User  Using Micro Find Summation of All Elements - Using function

#include<stdio.h>

#define Size 5

void Accept_Array(int Amt[ ]);
int Summation(int Amt1[ ]);

int main()
{	
	int Bill[Size] = {0}, Total = 0;
	
	Accept_Array(Bill);
	
	Total = Summation(Bill);
	
	printf("\n\n Total Bill Amount is = %d", Total);
	
	return 0;
}

void Accept_Array(int Amt[ ])
{
	int i = 0;		
	
	for(i = 0; i < Size; i++)
	{
		printf("\n Enter Bill Amount %d = ", i + 1 );
		scanf("%d",&Amt[i]);
	}
	return;
}	
	
int Summation(int Amt1[ ])
{
		int i = 0, Bill_Total = 0;			
		
		for(i = 0; i < Size; i++)
		{
			 Bill_Total = Bill_Total + Amt1[i];
        }	

return Bill_Total;
}	
	