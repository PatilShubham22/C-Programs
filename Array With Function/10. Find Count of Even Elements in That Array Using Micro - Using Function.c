/// Find Count of Even Elements in That Array Using Micro - Using Function

#include<stdio.h>

#define Size 5

void Accept_Array(int Num[ ]);
int Even_Count(int Num1[ ]);

int main()
{	
	int Bill[Size] = {0};
	
	Accept_Array (Bill);
	
	printf("\n Even Amounts in Bills Are = %d", Even_Count(Bill));
	
	return 0;
}	

void Accept_Array(int Num[ ])
{
	int i= 0;
	
	for(i = 0; i < Size; i++)
	{
		printf("\n Enter Bill Amount %d = ", i + 1 );
		scanf("%d",&Num[i]);
	}
	return;
}

int Even_Count(int Num1[ ])
{
	int i = 0, Ecnt = 0;
	 		
	for(i = 0; i < Size; i++)
	{
		if((Num1[i] != 0) && (Num1[i] % 2 == 0))
		{
			Ecnt++;
		}		
	}
   return Ecnt;
}	
	