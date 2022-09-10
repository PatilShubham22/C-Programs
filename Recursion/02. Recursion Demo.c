#include<stdio.h>

int Fun();

int main()
{
    int Cnt = 0;

    printf("Welcome we are Inside main()");
    getch();

    Cnt = Fun();

    printf("\n Back to main() No of calls to fun() are %d",Cnt);

  return 0;
}

int Fun()
{
    int i = 0;

    i++;

    printf("\n Inside Fun() Functions call no %d",i);
    getch();

    if(i <= 5)
    {
        Fun();
    }

   return i;
}
