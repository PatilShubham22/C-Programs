/// Program To Count Lower Case Letters In Given String

#include<stdio.h>

int main()
{
	char Name[20] = {'\0'};
	int i = 0, lowCnt = 0;
	
	printf("\n Enter a Name = ");
	gets(Name);
	
	while(Name[i] != '\0')
	{
		if(Name[i] >= 'a' && Name[i] <= 'z')
		{
			lowCnt++;
		}	
		i++;
	}
	
	printf("\n Count Lower Case Letters In given String is = %d", lowCnt);		
	
}	