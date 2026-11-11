#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char Arr[100];

    printf("Enter String : \n");
    scanf("%[^'\n']s", Arr);   //[^'\n'] yachyani space pudchi string pn yeil

    printf("Entered String is : %s\n", Arr);

    return EXIT_SUCCESS;
}

/*
Enter String :
Pune maharastra
Entered String is : Pune maharastra
*/