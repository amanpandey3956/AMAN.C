#include<stdio.h>
main()
{
    int a,b,c,Max;
    printf("Enter 3 numbers:");
    scanf("%d%d%d",&a,&b,&c);
    Max=a>b?(a>c?a:c):(b>c?b:c);
    printf("Max number is %d",Max);


}
