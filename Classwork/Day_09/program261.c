// $ % & * #
#include<stdio.h>
#include<stdlib.h>

void CountFrequencyX(char *str)
{
    int iCountSmall = 0, iCountCapital = 0, iCountDigits = 0;

    while(*str!='\0')
    {
      if(*str >='a' && *str <='z' )
      {
        iCountSmall++;
      }
      else if(*str>='A' && *str<='Z')
      {
        iCountCapital++;
      }
      else // issue
      {
        iCountDigits++;
      }
      str++;
    }

    printf("Frequency of Small letters : %d\n", iCountSmall);
    printf("Frequency of Capital letters : %d\n", iCountCapital);
    printf("Frequency of Digits letters : %d\n", iCountDigits); 
}

int main()
{
    char Arr[100] = {'\0'};

    printf("Enter String : \n");
    scanf("%[^'\n']s", Arr);

    CountFrequencyX(Arr);
    
    return EXIT_SUCCESS;
}