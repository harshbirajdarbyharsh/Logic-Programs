#include<stdio.h>

int SumDigits(int iNo)
{
    int iSum = 0;
    int iDigits = 0;
    
    while(iNo != 0)
    {
        iDigits = iNo % 10;
        iSum = iSum + iDigits;
        iNo = iNo / 10;
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);
    iRet = SumDigits(iValue);

    printf("Number of digits are : %d\n",iRet);

    return 0;
}
