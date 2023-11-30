#include<stdio.h>

void DisplayClass(float fMarks)
{   
    if((fMarks < 0.00) || (fMarks > 100.00))  // Filter
    {
        printf("Invalid Marks ...\n");
    }

    if((fMarks >= 0.0) && (fMarks < 35.00))
    {
        printf("Your are Fail...\n");
    } 
    else if((fMarks >= 35.00) && (fMarks < 50.00))
    {
        printf("Your Class is Pass Class...\n");
    }
    else if((fMarks >= 50.00) && (fMarks < 60.00))
    {
        printf("Your Class is Second Class...\n");
    }
    else if((fMarks >= 60.00) && (fMarks < 75.00))
    {
        printf("Your class is first class...\n");
    }
    else if((fMarks >= 75.00) && (fMarks <= 100.00))
    {
        printf("Your Class is First With Distincion...\n");
    }

}
int main()
{
    float fValue = 0.0f;

    printf("Enter your Percentage : \n");
    scanf("%f",&fValue);

    DisplayClass(fValue);

    return 0;
}