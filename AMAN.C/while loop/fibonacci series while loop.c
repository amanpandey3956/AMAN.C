#include<stdio.h>
main()
{
int n,prev=0,next=1,r,i;
printf("Enter how many term of Fibonacci series");
scanf("%d",&n);
printf("%d %d",prev,next);
i=0;
while(i<n)
{
r=prev+next;
printf(" %d",r);
prev=next;
next=r;
i=i+1;
}

























}
