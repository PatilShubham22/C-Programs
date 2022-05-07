/// Find Count of Even, odd & Zero Elements in That Array - Using Micro

#include<stdio.h>
#include<conio.h>

#define Size 5

int main()
{
	
	int i = 0, Bill[Size] = {0}, Ecnt = 0, Ocnt = 0, Zcnt = 0;
	
	for(i = 0; i < Size; i++)
	{
		printf("\n Enter Bill Amount %d = ", i + 1 );
		scanf("%d",&Bill[i]);
		
		if((Bill[i] != 0) && (Bill[i] % 2 == 0))
		{
			Ecnt++;
		}
		else if(Bill[i] % 2 == 1)
		{
			Ocnt++;
		}
		else if(Bill[i] == 0)
		{
			Zcnt++;
		}
	}
	
	printf("\n Bills in The List Are =>\n\n");
	
	for(i = 0; i < Size; i++)
	{
		printf("\n\n Amount in Bill No %d = %d", i + 101, Bill[i]);
	}
	
	printf("\n\n*************************************\n");
	printf("\n Even Amounts in Bills Are = %d", Ecnt);
	printf("\n\n*************************************");
	
	printf("\n\n*************************************\n");
	printf("\n Odd Amounts in Bills Are = %d", Ocnt);
	printf("\n\n*************************************");
	
	printf("\n\n*************************************\n");
	printf("\n Zero Amounts in Bills Are = %d", Zcnt);
	printf("\n\n*************************************");

	
return 0;
}	
	