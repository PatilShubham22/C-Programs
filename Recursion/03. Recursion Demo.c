#include<stdio.h>

int Fun();
int i = 0;

int main()
{
    int Cnt = 0;

    printf("Welcome we are Inside main()\n");
    getch();

    Cnt = Fun();

    printf("\n\n Back to main() No of calls to fun() are %d",Cnt);

  return 0;
}

int Fun()
{
    i++;

    printf("\n Inside Fun() Functions call no %d",i);
    getch();

    if(i <= 5)
    {
        Fun();
    }

   return i;
}
