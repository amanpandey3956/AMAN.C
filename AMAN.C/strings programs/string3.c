#include<stdio.h>
#include<string.h>
main()
{

    char fname[15];
    int i=0;
    printf("Enter your name:");
    scanf("%s",fname);
    while(fname[i]!='\0')
    {
        printf("%c",fname[i]);
        i=i+1;

    }
    printf("Length of string : %d",i);

}
