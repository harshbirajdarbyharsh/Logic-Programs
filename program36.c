#include<stdio.h>
#include<stdbool.h>

void DisplayFactors(int iNo)
{
   int iCnt = 0;
   printf("Factor of %d are : \n",iNo);
   //       1               2       3
   for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
   {
    if((iNo % iCnt) == 0)
    {
        printf("%d\n",iCnt);
    }
   }
}

int main()
{
    int iValue = 0;

    printf("Enter the number : \n");
    scanf("%d",&iValue);

    DisplayFactors(iValue);
    return 0;
}

// TIme Complexcity : 0(N/2)