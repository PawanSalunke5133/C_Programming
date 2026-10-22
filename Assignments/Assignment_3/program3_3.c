#include<stdio.h>
///////////////////////////////////////////////////
//
//   Function Name    :   DispalyEvenFactors
//   Input            :   Integer (iNo)
//   Output           :   none
//   Description      :   Displays even factors of the given number on screen
//   Date             :   22/10/2026
//   Author           :   Pawan Parmeshwar Salunke
//
///////////////////////////////////////////////////
void DispalyEvenFactors(int iNo)
{
    int i = 0;
    if(iNo <  0)
    {
        iNo = -iNo;
    }
    for(i =1; i<=iNo; i++)
    {
        if((iNo % i == 0) && (i%2 == 0 ))
        {
          printf("%d\t", i);
        }
    }
}
/////////////////////////////////////////////////
//  
//  Entry Point of the Application 
//
//////////////////////////////////////////////////
int main()
{
    int iValue=0;
    printf("Enter number :\n");
    scanf("%d", &iValue);

    DispalyEvenFactors(iValue);

    return 0;
}