#include<stdio.h>
////////////////////////////////////////////////////////////////////////////////
//
//  Function Name : Pattern
//  Description   : Accept number of rows and number of columns from user and display below pattern.
//  Input         : Integer, Integer
//  Output        : None
//  Author        : Pawan Parmeshwar Salunke
//  Date          : 18/11/2026
//
//////////////////////////////////////////////////////////////////////////
void Pattern(int iRows, int iCols)
{
    int i = 0, j = 0;
    for(i = 1; i <= iRows; i++)
    {
        for(j = 1; j <= iCols; j++)
        {
            if(i == j)
            {
                printf("$\t");
            }
            else if(i > j)
            {
                printf("#\t");
            }
            else
            {
                printf("*\t");
            }
        }
        printf("\n");
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns:\n");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);
    
    return 0;
}