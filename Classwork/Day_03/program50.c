#include<stdio.h>
#include<stdlib.h>

int Minimum(int iNo1, int iNo2, int iNo3, int iNo4)
{
   if((iNo1 < iNo2) && (iNo1 <  iNo3) && (iNo1 < iNo4))
   {
     return iNo1;
   }  
   else if((iNo2 < iNo1) && (iNo2 < iNo3)&& (iNo2 < iNo4))
   {
     return iNo2;
   }
   else if((iNo3 < iNo1) && (iNo3 < iNo2)&& (iNo3 < iNo4))
   {
     return iNo3;
   }
   
   else 
   {
    return iNo4;
   }
}
int main()
{
    int ivalue1=0, ivalue2 , ivalue3=0;
    int iresult=0, ivalue4=0;
    printf("Enter First No :\n");
    scanf("%d", &ivalue1);
    
    printf("Enter Second No :\n");
    scanf("%d", &ivalue2);

    printf("Enter third No :\n");
    scanf("%d", &ivalue3);

    printf("Enter four No :\n");
    scanf("%d", &ivalue4);

    iresult = Minimum(ivalue1, ivalue2, ivalue3, ivalue4);

    printf("Minimum is : %d",iresult);
    
    return EXIT_SUCCESS;
}