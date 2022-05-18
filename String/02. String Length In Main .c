///String Length In Main 

#include<stdio.h>

int main()
{
	char CArr[50] = {'\0'};
    int i = 0;
    
    puts("\n Enter a String = ");
    gets(CArr);
    
    for(i = 0; i <= 50; i++)
    {
    	if(CArr[i] == '\0')
    	{
    		break;
    	}
    }
    
    printf("\n Length of Given String is => %d ", i);				
	
return 0;	
}	