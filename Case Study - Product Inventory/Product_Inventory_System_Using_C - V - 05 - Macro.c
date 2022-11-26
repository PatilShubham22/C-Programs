#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define P_Count 3

struct Product
{
    int P_ID;
    char Name[20];
    float Sales_Price;
    float Purchase_Price;
    int Stock;
};

int main()
{
    int i = 0;

    struct Product P_Cart[P_Count] = {0};

    for(i = 0; i < P_Count; i++)
    {
        P_Cart[i].P_ID = i + 101;

        printf("\n Enter %d Product Details => \n", P_Cart[i].P_ID);
        fflush(stdin);

        printf("\n Enter Product Name = ");
        gets(P_Cart[i].Name);

        printf("\n Enter Sales Price = ");
        scanf("%f",&P_Cart[i].Sales_Price);

        printf("\n Enter Purchase_Price = ");
        scanf("%f",&P_Cart[i].Purchase_Price);

        printf("\n Enter Product Stock Remaining = ");
        scanf("%d",&P_Cart[i].Stock);

        printf("\n ***********************************************\n");
    }

    printf("\n Product Details Are => \n");

    for(i = 0; i < P_Count; i++)
    {
        printf("\n\t Product ID               = %d",P_Cart[i].P_ID);
        printf("\n\t Product Name             = %s",P_Cart[i].Name);
        printf("\n\t Sales Price              = %.2f",P_Cart[i].Sales_Price);
        printf("\n\t Purchase_Price           = %.2f",P_Cart[i].Purchase_Price);
        printf("\n\t Product Stock Remaining  = %d",P_Cart[i].Stock);
        printf("\n\n ********************************************************");
    }

   return 0;
}
