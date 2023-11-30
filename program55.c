#include<stdio.h>
#include<stdlib.h>

void EvenDisplay(int Arr[],int iSize)   // (100,4)
{
    int iCnt = 0;

    printf("\nEven Elements of the Array are : \n");

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
       if((Arr[iCnt] % 2 ) == 0)
    {
        printf("%d\t",Arr[iCnt]);
    }
       
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
   //        1        2            3
   for(iCnt = 0; iCnt < iCount; iCnt++)     // 0(N)
   {
    printf("\n Enter the element no %d :",iCnt+1);
    scanf("%d",&ptr[iCnt]);         //  4
   }

   EvenDisplay(ptr,iCount);   // Display(100,4)

   free(ptr);

   printf("Dynamic memory gets dellocated succesfully...\n");

    return 0;
}