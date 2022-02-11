#include<stdio.h>
// C Program for multiplication table of a given number
main()
{
    int i,a,b;
    printf("Enter Number");
    scanf("%d",&a);
    i=1;
    while(i<=10)
    {
    b=a*i;
    printf("\n%d",b);
    i=i+1;

    }
}
