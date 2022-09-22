#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iCnt = 0, iSum = 0, i = 0;
    int *iPtr = NULL;

    printf("Enter How Many Customers = ");
    scanf("%d",&iCnt);

    iPtr = (int*)malloc(iCnt * sizeof(int));

    for(i = 0; i < iCnt; i++)
    {
        printf("\nEntered Bill %d = ",101 + i);
        scanf("%d",&iPtr[i]);
    }

    printf("\n\n========================================\n\n");

    printf("\n Entered Bills are = ");

    for(i = 0; i < iCnt; i++)
    {
        iSum = iSum + iPtr[i];
        printf("  %d.",iPtr[i]);
    }

    printf("\n\n Sum of Given Bills is = %d",iSum);

  return 0;
}
