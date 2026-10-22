/*
    ........................................
                Operatin && (AND)
    ........................................
      Result 1      Result2      Final Result
    ........................................

      True          True         True
      True          False        False
      False         True         False       // short Circuit Evaluation
      False         False        False       // short Circuit Evaluation
    ........................................
*/
#include<stdio.h>
#include<stdlib.h>

void CheckDivisible(int iNo)
{
  if(((iNo % 3 )==0) && ((iNo % 5)==0)) 
  {
    printf("It Is Divisible\n");
  }
  else
  {
    printf("It Is Not Divisible");
  }
}
int main()
{
    int iValue=0;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    CheckDivisible(iValue);


    return EXIT_SUCCESS;
}