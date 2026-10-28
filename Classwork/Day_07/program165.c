#include<stdio.h>
#include<stdlib.h>

void Displayigits(int iNo)
{
    int iDigit=0;

    if(iNo<0)
    {
        iNo =  -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 2;
        if(iDigit % 2 == 0)
        {
         printf( "Even :%d\n", iDigit);
        } 
        else
        {
         printf( "Odd :%d\n", iDigit);
        }
        iNo = iNo /10;
    }
}

int main()
{
    int iValue =0;

    printf("Eneter number : \n");
    scanf("%d", &iValue);

    Displayigits(iValue);

    return EXIT_SUCCESS;
}