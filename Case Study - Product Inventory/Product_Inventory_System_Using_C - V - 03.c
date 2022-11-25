#include<stdio.h>
#include<stdlib.h>
#include<string.h>

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
    struct Product P_Cart;

    printf("\n Enter Product ID = ");
    scanf("%d",&P_Cart.P_ID);

    fflush(stdin);

    printf("\n Enter Product Name = ");
    gets(P_Cart.Name);

    printf("\n Enter Product Sales Price = ");
    scanf("%f",&P_Cart.Sales_Price);

    printf("\n Enter Product Purchase Price = ");
    scanf("%f",&P_Cart.Purchase_Price);

    printf("\n Enter Product Remaining Stock = ");
    scanf("%d",&P_Cart.Stock);

    printf("\n Product Details Are => \n");

    printf("\n\t Product ID              = %d",P_Cart.P_ID);
    printf("\n\t Product Name            = %s",P_Cart.Name);
    printf("\n\t Sales Price             = %.2f",P_Cart.Sales_Price);
    printf("\n\t Purchase_Price          = %.2f",P_Cart.Purchase_Price);
    printf("\n\t Product Stock Remaining = %d",P_Cart.Stock);

    printf("\n\n ********************************************************");
}
