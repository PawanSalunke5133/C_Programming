////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Pattern
//  Description   : Accept number and display sequence of '#', number, and '*' up to iNo.
//  Input         : Integer
//  Output        : None
//  Author        : Pawan Parmeshwar Salunke
//  Date          : 18/11/2026
//
////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iNo)
{
    int i = 0;
    for(i = 1; i <= iNo; i++)
    {
        printf("# %d * ", i);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number of elements: ");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}