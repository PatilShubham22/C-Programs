/// Program To Find Size of Structure

#include<stdio.h>
#include<conio.h>

struct Student
{
	int Roll_No;
	char S_Name[20];
	float Per;
	char Course[16];
};

int main()
{
	int Num;
	struct Student Std1;
	
	printf("\n Size of int Variable = %d", sizeof(Num));
	printf("\n Size of Structure Object = %d", sizeof(Std1));
	
getch();	
return 0;
}									