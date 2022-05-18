/// Progam To Check String Length In Main 

#include<stdio.h>

int main()
{
	char Name[20] = {'\0'};
	int Len = 0;
	
	printf("\n Enter Your Name = ");
	gets(Name);
	
	Len = strlen(Name);
	
	printf("\n Length of The String is = %d", Len);
	
}					