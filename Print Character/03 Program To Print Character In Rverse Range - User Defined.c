/// Program To Print Character In Rverse Range - User Defined

#include<stdio.h>
#include<conio.h>

int main()
{
	char ch = '\0', S_Char= '\0', E_Char = '\0'; 
	
	printf("\nEnter Starting Character = ");
	S_Char = getche();
	
	printf("\nEnter Ending Character = ");
	E_Char = getche();
	
	for(ch = S_Char; ch >= E_Char; ch--)
	{
		printf("\n %c", ch);
	}
	
	printf("\n\n Thanks For Input");	
	
return 0;
}
    
        
    
    