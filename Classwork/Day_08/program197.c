/*
example:
    Input : 4
    Output: A B C D
*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
   int iCnt = 0;
   
   for(iCnt=65; iCnt<=90; iCnt++)
   {
       printf("%d\t%o\t%x\t%c\n" ,iCnt, iCnt, iCnt, iCnt); 
   }

    return EXIT_SUCCESS;
}
/*
  octal   
  65      101     41      A
  66      102     42      B
  67      103     43      C
  68      104     44      D
  69      105     45      E
  70      106     46      F
  71      107     47      G
///
*/