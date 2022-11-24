#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct Product
{
    int Product_ID;
    char Product_Name[20];
    float Sales_Price;
    float Purchase_Price;
    int Stock;
};

int main()
{
    struct Product Obj;

    printf(" Enter Product ID = ");
    scanf("%d",&Obj.Product_ID);
    fflush(stdin);

    printf("\n Enter Name = ");
    gets(&Obj.Product_Name);

    printf("\n Enter Sales Price = ");
    scanf("%f",&Obj.Sales_Price);

    printf("\n Enter Purchase Price = ");
    scanf("%f",&Obj.Purchase_Price);

    printf("\n Enter Stock = ");
    scanf("%d",&Obj.Stock);

    getch();

    printf("\n Given Details Are =>\n");

    printf("\n Product ID = %d",Obj.Product_ID);
    printf("\n\n Name = %s",Obj.Product_Name);
    printf("\n\n Sales Price = %f",Obj.Sales_Price);
    printf("\n\n Purchase Price = %f",Obj.Purchase_Price);
    printf("\n\n Stock = %d",Obj.Stock);

  return 0;
}
