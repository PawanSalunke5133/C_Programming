//8998
//14341 palindrome number all
//707
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool checkPalindrome(int iNo)
{
    int iDigit =0;
    int iRev =0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
        iNo = iNo / 10;

    }
        if(iRev == iNo) // issue
        {
            return true;
        }
        else
        {
            return false;
        }
}
int main()
{
    int iValue =0;
    bool bRet =false;

    printf("Eneter number : \n");
    scanf("%d", &iValue);

    bRet = checkPalindrome(iValue);
    if(bRet == true)
    {
        printf("It Is Palindromme Number");
    }
    else
    {
        printf(" it is not palindrome");
    }

    printf("Enter Reverse %d\n", bRet);

    return EXIT_SUCCESS;
}