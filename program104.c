#include<stdio.h>

int Counta(char str[])  // *str
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == 'a')
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
  char Arr[20];
  int iRet = 0;

  printf("Enter the String : \n");
  scanf("%[^'\n']s",Arr);

  iRet = Counta(Arr);   

  printf("count of a letter is : %d\n",iRet);

  return 0;
}