#include<stdio.h>

void ReplaceVowels(char str[]) 
{

    while(*str != '\0')
    {
        if(*str == 'a' || *str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U' || *str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u')
        {
            *str = '_';
        }
        str++;
    }
}

int main()
{
  char Arr[20];
  

  printf("Enter the String : \n");
  scanf("%[^'\n']s",Arr);

 ReplaceVowels(Arr);   

  printf("REplace vowels is : %s\n",Arr);

  return 0;
}