// problem statement : Accept radius from user and calculate the area of circle

// Step1 : Understand the statement 
// Conclusion : we are going to use formula as PI*R*R

// Step2 : Algorithm
/*
   START
       Accept radius from user and store into Radius
       Create variable as PI and store value 3.14
       Calculate area PI * RADIUS * RADIUS
       Display thee value of Area to the user
   stop
*/
#include<stdio.h>

/////////////////////////////////////////////////////////////
//
// Function Name : CalculateArea
// Description : It is used to Calculate area of circle
// Input : float
// Output : float
// Auther Name : Harsh Balasaheb Birajdar
// Date : 02/10/2023
// 
/////////////////////////////////////////////////////////////

//#define PI 3.14

float CalculateArea(float fValue)
{
    auto float fAns = 0.0f;
    auto const float PI = 3.14f;

    fAns = PI * fValue * fValue;
    return fAns;
}
///////////////////////////////////////////////////////////////
//
// Entry Point Function
//
///////////////////////////////////////////////////////////////
int main()
{
    auto float fRadius = 0.0f;
    auto float fArea = 0.0f;

    printf("Enter the radius of circle : \n");
    scanf("%f",&fRadius);

    fArea = CalculateArea(fRadius);

    printf("Area of circle is : %f\n",fArea);

    return 0;   
}