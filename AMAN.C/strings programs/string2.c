#include<stdio.h>
#include<string.h>
main()
{

    char fname[15];
    int x;
    printf("Enter your name:");
    scanf("%s",fname);
    x=strlen(fname);
    printf("Length of string is %d",x);

}
