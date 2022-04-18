/// Program To Priint Table In Given Range - FIXED
#include<stdio.h>
#include<conio.h>

int main()
{
		
	int R = 0, C = 0, SNum = 15, ENum = 20;
	
	printf("\n\nTable As =>\n\n");
	
	for(R = 1; R <= 10; R++)
	{
		for(C = SNum; C <= ENum; C++)
		{
			printf(" %3d", (R * C));
		}
		printf("\n");
	}									
	
return 0;
}
    
        
    
    