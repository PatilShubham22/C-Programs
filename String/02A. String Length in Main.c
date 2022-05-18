/// Progam To Check String Length In Main 

#include<stdio.h>

int main()
{
	char Name[20] = {'\0'};
	int i = 0;
	
	printf("\n Enter Your Name = ");
	gets(Name);
	
	while(Name[i] != '\0')
	{
		i++;
	}
	
	printf("\n Length of The String is = %d", i);
	
}					