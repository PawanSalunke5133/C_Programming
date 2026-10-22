// input : 4
// op : 1 2 3 4
#include<stdio.h>
#include<stdlib.h>

void Display(int iNo)
{
    int iCnt =0;
    for(iCnt=1; iCnt<=iNo; iCnt++)
    {
      printf("%d\n",iCnt);
    }

}
int main()
{
    int ivalue =0;

    printf("Enter The Frequency :\n");
    scanf("%d", &ivalue);

    Display(ivalue);

    
    return EXIT_SUCCESS;
}