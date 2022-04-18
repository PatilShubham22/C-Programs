/// program To Print Pattern

#include<stdio.h>

int main ()
{
	
	int i = 0, j = 0, R = 0, C = 0;
	
	printf("\n Enter Row Value = ");
	scanf("%d",&R);
	
	printf("\n Enter Column Value = ");
	scanf("%d",&C);
	
	for(i = 1; i <= R; i++)
	{
		for(j = 1; j <= C; j++)
	    {
	    	printf(" $ ");
	    }
	    printf("\n");
	}
	
return 0;
}