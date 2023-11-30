#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iSize)
{
    int iCnt = 0;

    printf("\nElements of the Array are : \n");
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
       printf("%d\t",Arr[iCnt]);
    }
    printf("\n");
}

int main()
{
    int iCount = 0,iCnt = 0;
    int *ptr = NULL;

    printf("Enter the number of element that u want to enter : \n ");
    scanf("%d",&iCount);

   ptr =(int *)malloc(iCount * sizeof(int));

   printf("Dynamic memory gets allocated succesfully for %d elements\n",iCount);

   printf("Enter the %d values : \n",iCount);

   printf("Enter the values : \n");
   for(iCnt = 0; iCnt < iCount; iCnt++)
   {
    printf("\n Enter the element no %d :",iCnt+1);
    scanf("%d",&ptr[iCnt]);
   }

   Display(ptr,iCount);

   free(ptr);

   printf("Dynamic memory gets dellocated succesfully...\n");

    return 0;
}