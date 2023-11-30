
#include<stdio.h>
#include<stdbool.h>

int CheckPallindrome(int iNo)
{
    int iCopy = iNo; // Xerox kadhali
    int iRev = 0;
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        iRev = (iRev * 10) + iDigit;
    }

   return(iRev == iCopy);
}
int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    bRet = CheckPallindrome(iValue);
    if(bRet == true)
    {
         printf("%d is CheckPallindrome number \n",iValue);
    }
    else
    {
        printf("%d is not CheckPallindrome number \n",iValue);
    }
   

    return 0;
}