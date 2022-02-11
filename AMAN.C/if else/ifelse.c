#include<stdio.h>

main()
{
int a,b,c;
printf("Enter 3 number");
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
if(a>b || a>c)
{
printf("A is max");
}
else if(b>a || b>c)
{
printf("B is max");

}else
{
printf("C is max");

}
}

