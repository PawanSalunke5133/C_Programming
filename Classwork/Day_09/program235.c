#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char Arr[100];

    printf("Enter String : \n");

  //  scanf("%[^'\n']s", Arr);                                   
  fgets(Arr,sizeof(Arr),stdin);   // hy doni pn vapru shkto

    printf("Entered String is : %s\n", Arr);

    return EXIT_SUCCESS;
}
