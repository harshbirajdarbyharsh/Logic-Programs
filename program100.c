#include<stdio.h>


int main()
{
  char Arr[20];

  printf("Enter the String : \n");
  //scanf("%s",Arr);  space is count
  gets(Arr);  // not space is count 

  printf("Entered string is : %s\n",Arr);

  return 0;
}