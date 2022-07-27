/// Find Count of odd Elements in That Array Using Micro - Using Function

#include<stdio.h>
#include<conio.h>

#define Size 5

void Accept_Array(int Num[ ]);
int Odd_Count(int Num1[ ]);

int main()
{
	int Bill[Size] = {0};
	
	Accept_Array (Bill);
	
	printf("\n Odd Amounts in the Bills are = %d", Odd_Count(Bill));
		
return 0;
}	

void Accept_Array (int Num [])
{
	 int i = 0;
	
	for(i = 0; i < Size; i++)
	{
		printf("\n Enter Bill Amount %d = ", i + 1 );
		scanf("%d",&Num[i]);
	}
}	
	
int Odd_Count(int Num1[ ])			
{
		int i = 0, Ocnt = 0;
		
		for(i = 0; i < Size; i++)
		{		
		    if(Num1[i] % 2 == 1)
		    {
			Ocnt++;
		    }
	    }
	    return Ocnt;
}	