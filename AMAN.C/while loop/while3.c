#include<stdio.h>
main()
{
    int a,b,sum=0;
    printf("Enter Number:");
    scanf("%d",&a);
    while(a>0)
    {
        b=a%10;
        sum=sum+b;
        a=a/10;
    }
    printf("\n%d",sum);
}
