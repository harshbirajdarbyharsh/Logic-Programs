#include<stdio.h>

void Display(char str[])  // *str
{
    printf("String is : %s\n",str);
}

int main()
{
  char Arr[20];

  printf("Enter the String : \n");
  scanf("%[^'\n']s",Arr);

  printf("Entered string is : %s\n",Arr);

  return 0;
}