/// Program To Accept Bill Amount From User - Display Sum Of Them Till User Enters -ve or Zero

#include<stdio.h>

int main ()
{
	int Num = 0, Sum = 0, Cnt = 1;
	
	printf("Enter Bill Amounts for Addition => ");
	printf("\n Note = Enter -ve Number Or Zero To Stop Input");
	
	while(1)
	{
		printf("\n Enter Bill Number %d =  ",Cnt);
		scanf("%d",&Num);
		
		    if(Num <= 0)
		    {
			     break;
	    	}
		
		Sum = Sum + Num;
		Cnt++;
	}
	    printf("\n\n≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠");
		printf("\n\n Addition Of Given Numbers = %d", Sum);
		printf("\n\n≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠≠");
return 0;
}												