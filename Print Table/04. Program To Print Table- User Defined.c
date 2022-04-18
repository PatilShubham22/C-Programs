/// Program To Print Table- User Defined
#include<stdio.h>
#include<conio.h>

int main()
{
	int num = 0, cnt = 1;
		
	printf("\n\n Enter Any Integer Number To Get Table = ");
	scanf("%d", &num);
	
	printf("\n Table For %d is =", num);
	
	while(cnt<=10)
	{
		printf("\n %d", (num * cnt));
		cnt++;
	}					
	
return 0;
}
    
        
    
    