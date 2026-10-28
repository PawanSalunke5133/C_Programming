#include<stdio.h>
#include<stdlib.h>

void DisplayOddDigits(int iNo)
{
    int iDigit=0;

    if(iNo<0)
    {
        iNo =  -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 2;
        if(iDigit % 2 == 1)
        {
         printf("%d\n", iDigit);
        } 
        iNo = iNo /10;
    }
}

int main()
{
    int iValue =0;

    printf("Eneter number : \n");
    scanf("%d", &iValue);

    DisplayOddDigits(iValue);

    return EXIT_SUCCESS;
}