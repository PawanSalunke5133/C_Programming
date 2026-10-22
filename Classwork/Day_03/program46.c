#include<stdio.h>
#include<stdlib.h>

float Average(int iNo1, int iNo2, int iNo3)
{
    float fAns=0.0f;
    //typecast
    fAns=((float)iNo1 + (float)iNo2 + (float)iNo3) /3;
    return fAns;
}
int main()
{
    int ivalue1=0, ivalue2 , ivalue3=0;
    float fresult=0.0f;

    printf("Enter First No :\n");
    scanf("%d", &ivalue1);
    
    printf("Enter Second No :\n");
    scanf("%d", &ivalue2);

    printf("Enter third No :\n");
    scanf("%d", &ivalue3);

    fresult = Average(ivalue1, ivalue2, ivalue3);

    printf("Average is : %f",fresult);
    
    return EXIT_SUCCESS;
}