#include<stdio.h>
#include<stdlib.h>

int OddAddition(int Arr[],int iSize)   // (100,4)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {   
        if((Arr[iCnt] % 2 ) == 1)
        {
           iSum = iSum + (Arr[iCnt]);
        }    
    }
    return iSum;
}

int main()
{
    int iCount = 0,iCnt = 0,iRet = 0;
    int *ptr = NULL;

    printf("Enter the number of element that u want to enter : \n ");
    scanf("%d",&iCount);

   ptr =(int *)malloc(iCount * sizeof(int));

   printf("Dynamic memory gets allocated succesfully for %d elements\n",iCount);

   printf("Enter the %d values : \n",iCount);

   //        1        2            3
   for(iCnt = 0; iCnt < iCount; iCnt++)     // 0(N)
   {
    printf("\n Enter the element no %d :",iCnt+1);
    scanf("%d",&ptr[iCnt]);         //  4
   }

   iRet = OddAddition(ptr,iCount);   // Display(100,4)
   
   printf("Addition of all Odd elements are  : %d\n",iRet);

   free(ptr);

   printf("Dynamic memory gets dellocated succesfully...\n");

    return 0;
}