#include<stdio.h>
#include<string.h>
main()
{

    char fname[15];
    int x;
    printf("Enter your name:");
    scanf("%s",fname);
    strrev(fname);
    printf("\n%s",fname);
    strupr(fname);
    printf("\n%s",fname);
    strlwr(fname);
    printf("\n%s",fname);

}
