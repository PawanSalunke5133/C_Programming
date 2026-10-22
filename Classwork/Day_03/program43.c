#include<stdio.h>
#include<stdlib.h>

int Minimum(int iNo1, int iNo2)
{
    if(iNo1 < iNo2)
    {
        return iNo1;
    }
    else
    {
      return iNo2;
    }
}
int main()
{
    int ivalue1=0, ivalue2, iresult=0;

    printf("Enter First No :\n");
    scanf("%d", &ivalue1);
    
    printf("Enter Second No :\n");
    scanf("%d", &ivalue2);

    iresult = Minimum(ivalue1, ivalue2);

    printf("Minimum No : %d",iresult);
    
    return EXIT_SUCCESS;
}