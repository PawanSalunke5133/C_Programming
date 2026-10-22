#include<stdio.h>

typedef int BOOL;
# define TRUE 1
# define FALSE 0
///////////////////////////////////////////////////
//
//   Function Name    :   ChkVowel
//   Input            :   Character (CValue)
//   Output           :   BOOL (TRUE or FALSE)
//   Description      :   Accepts one character from user and checks whether that character is vowel or not[cite: 2]
//   Date             :   22/10/2026
//   Author           :   Pawan Parmeshwar Salunke
//
///////////////////////////////////////////////////
BOOL ChkVowel ( char CValue)
{
    if(CValue == 'a' || CValue == 'e' || CValue == 'i' || CValue == 'o' || CValue == 'u' ||
       CValue == 'A' || CValue == 'E' || CValue == 'I' || CValue == 'O' || CValue == 'U')
    {
       return TRUE;
    }
    else
    {
      return FALSE;
    }
}
int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter character\n");
    scanf("%c",&cValue);

    bRet =ChkVowel(cValue );
    if (bRet == TRUE)
    {
      printf("It is Vowel\n");
    }
    else
    {
      printf("It is Vowel\n");
    }
    return 0;
}