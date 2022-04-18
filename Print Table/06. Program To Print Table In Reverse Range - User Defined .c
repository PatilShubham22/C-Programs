/// Program To Print Table In Reverse Range - User Defined 
#include<stdio.h>
#include<conio.h>

int main()
{
		
	int R = 0, C = 0, SNum = 0, ENum = 0;
	
	printf("\n Enter Starting Number =>");
	scanf("%d",&SNum);
	
	printf("\n Enter Ending Number =>");
	scanf("%d",&ENum);
	
	printf("\n\nTable As =>\n\n");
	
	for(R = 1; R <= 10; R++)
	{
		for(C = SNum; C >= ENum; C--)
		{
			printf(" %3d", (R * C));
		}
		printf("\n");
	}									
	
return 0;
}
    
        
    
    