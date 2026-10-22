#include<stdio.h>
#include<stdlib.h>

void CheckDivisible(int iNo)
{
  if((iNo %5 )==0)
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