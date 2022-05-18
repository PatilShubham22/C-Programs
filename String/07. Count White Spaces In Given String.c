/// Program To Count White Spaces In Given String

#include<stdio.h>

int main()
{
	char Name[20] = {'\0'};
	int i = 0, SpaceCnt = 0;
	
	printf("\n Enter a Name = ");
	gets(Name);
	
	while(Name[i] != '\0')
	{
		if(Name[i] == ' ')
		{
			SpaceCnt++;
		}	
		i++;
	}
	
	printf("\n Count of White Spaces In given String is = %d", SpaceCnt);		
	
}	