#include<stdio.h>
#include<stdlib.h>

float Average(int Arr[], int iSize)
{
    int iCnt = 0, iSum = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }

    return ((float)iSum / iSize);
}

int main()
{
  int iCount = 0,iCnt = 0;
  int *ptr = NULL;
  float fRet = 0.0f;

  printf("Enter no. of element that u want to enter : \n");
  scanf("%d",&iCount);

  ptr = (int *)malloc(iCount * sizeof(int));
  printf("Dynamic memory gets allocated succefully...\n");

  printf("Enter the element : \n");
  for(iCnt = 0; iCnt < iCount; iCnt++)
  {
    printf("\n Enter the element no %d : ",iCnt+1);
    scanf("%d",&ptr[iCnt]);
  }

  fRet = Average(ptr,iCount);
  printf("Average is : %f\n",fRet);

  free(ptr);
  printf("Dynamic memory gets deallocated succefulley..\n");

    return 0;
}