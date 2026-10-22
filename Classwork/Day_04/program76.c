// input : 10
// op : 1 3 5 7 9

#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    int iCnt =0;
    for(iCnt=1; iCnt<=iNo; iCnt++)
    {
        printf("%d\t",iCnt);
        iCnt++;
    }
    printf("\n");
}
int main()
{
    int ivalue =0;

    printf("Enter The Frequency:\n");
    scanf("%d", &ivalue);

    Display(ivalue);

    
    return EXIT_SUCCESS;
}