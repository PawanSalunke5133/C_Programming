////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Pattern
//  Description   : Accept number and display uppercase  from 'A' to character
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
    char ch = 'A';
    
    for(i = 1; i <= iNo; i++)
    {
        printf("%c ", ch);
        ch++;
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