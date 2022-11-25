#include<stdio.h>

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
    struct Product P_Cart = {50, "Pen", 40, 30, 100};

    printf("\n Product Details Are => \n");

    printf("\n\t Product ID              = %d",P_Cart.P_ID);
    printf("\n\t Product Name            = %s",P_Cart.Name);
    printf("\n\t Sales Price             = %.2f",P_Cart.Sales_Price);
    printf("\n\t Purchase_Price          = %.2f",P_Cart.Purchase_Price);
    printf("\n\t Product Stock Remaining = %d",P_Cart.Stock);

    printf("\n\n ********************************************************");
}
