// input : 4
// op : 4 3 2 1
#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    int iCnt =0;
    for(iCnt=iNo; iCnt>=1; iCnt--)
    {
        printf("%d\t",iCnt);
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