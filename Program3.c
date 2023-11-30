// Problem Statement : Accept 2 value from user and perform the addition

// step 1 : Understand the problem statementv
// conclusion : we have to accept 2 int & perfotm its addition

// step 2 : write the algorithm
/*
 START
      Accept first number from user & store it into no1
      Accept second number from user & store it into no2
      create one variable to store the result named as ANS
      perform Addition of no1 no2, store the result in Ans
      Display the result from Ans to the user    
 STOP
*/

//step 3: Decide the programming language (c,c++,java,python)
// we select c programming

// step 4 : write the program

#include<stdio.h>

int main()
{
    int i,j,k;
    printf("Enter first number: \n");
    scanf("%d",&i);

     printf("Enter first number: \n");
    scanf("%d",&j);

    k = i + j;

    printf("Addition is : %d\n",k);

    return 0;



}
