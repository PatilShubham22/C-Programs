/// Copy String Main

#include<stdio.h>

int main()
{
	char Name[20] = {'\0'};
	char CpyName[20] = {'\0'};
	int i = 0;
	
	printf("\n Enter a Name = ");
	gets(Name);
	
	while(Name[i] != '\0')
	{
		CpyName[i] = Name[i];	
		i++;
	}
	 CpyName[i] = '\0';
	 
	printf("\n Given String is = %s",Name);
	printf("\n Coppied To New String is = %s", CpyName);
	
return 0;	
}			