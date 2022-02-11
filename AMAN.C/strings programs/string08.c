#include<stdio.h>

main()
{

    char fname[15];
    int i=0;
    printf("Enter your name:");
    scanf("%s",fname);
    while(fname[i]!='\0')
    {
    printf("%c",fname[i]-32);
        i=i+1;

    }


}
