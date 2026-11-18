#include <stdio.h>
////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Display
//  Description   : Accepts two numbers and prints a pattern.
//  Input         : Integer, Integer
//  Output        : None
//  Author        : Pawan Parmeshwar Salunke
//  Date          : 18/11/2026
//
////////////////////////////////////////////////////////
void Display(int iRow, int iCol) 
{
    int i = 0, j = 0;
    char ch = 'A';

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++) 
        {
            printf("%c ", ch);
        }
        ch++;
        printf("\n");
    }
}

int main() {
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d%d", &iValue1, &iValue2);

    Display(iValue1, iValue2);

    return 0;
}