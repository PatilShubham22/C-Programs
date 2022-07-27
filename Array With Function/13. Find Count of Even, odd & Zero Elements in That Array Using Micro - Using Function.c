/// Find Count of Even, odd & Zero Elements in That Array Using Micro - Using Function

#include<stdio.h>
#include<conio.h>

#define Size 10

void Accept_Array(int Num[ ]);
int Even_Count(int Num1[ ]);
int Odd_Count(int Num2[ ]);
int Zero_Count(int Num3[ ]);

int main()
{
	
	int Bill[Size] = {0};
	
	Accept_Array(Bill);
	
	printf("\n\n Even Amounts in Bills Are = %d", Even_Count(Bill));
	
	printf("\n\n Odd Amounts in Bills Are = %d", Odd_Count(Bill));
	
	printf("\n\n Zero Amounts in Bills Are = %d", Zero_Count(Bill));
	
	return 0;
	
}

void Accept_Array(int Num[ ])
{		
    int i = 0;
    
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

int Odd_Count(int Num2[ ])
{
		int i = 0, Ocnt = 0;
		
		 for(i = 0; i < Size; i++)
		 {				 				
		      if(Num2[i] % 2 == 1)
		      {
			     Ocnt++;
		      }
		 }
	return Ocnt;
}

int Zero_Count(int Num3[ ])
{
		int i= 0, Zcnt = 0;
		
		for(i = 0; i < Size; i++)
		{		  		  
		    if(Num3[i] == 0)
		    {
			   Zcnt++;
		    }
	    }
	return Zcnt;
}	    
	