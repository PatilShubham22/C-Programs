/// Program To Count Upper Case Letters In Given String

#include<stdio.h>

int main()
{
	char Name[20] = {'\0'};
	int i = 0, uprCnt = 0;
	
	printf("\n Enter a Name = ");
	gets(Name);
	
	while(Name[i] != '\0')
	{
		if(Name[i] >= 'A' && Name[i] <= 'Z')
		{
			uprCnt++;
		}	
		i++;
	}
	
	printf("\n Count of Upper Case Letters In given String is = %d", uprCnt);		
	
}	