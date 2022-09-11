#include<stdio.h>

int Fun();

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
    static int i = 1;

    printf("\n Inside Fun() Functions call no %d",i);
    getch();

    i++;

    if(i <= 5)
    {
        Fun();
    }

   return i;
}
