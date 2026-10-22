/*
    ........................................
                Operatin || (OR)
    ........................................
      Result 1      Result2      Final Result
    ........................................

      True          True         True   // short Circuit Evaluation
      True          False        True   // short Circuit Evaluation
      False         True         True       
      False         False        False       
    ........................................
*/
#include<stdio.h>
#include<stdlib.h>

void CheckDivisible(int iNo)
{
  if(((iNo % 3 )==0) || ((iNo % 5)==0)) 
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