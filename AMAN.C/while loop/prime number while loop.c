#include<stdio.h>
main()

{
int i,n,sum;
printf("Enter  number");
scanf("%d",&n);
i=2;
while(i<n)
{
if(n%i==0)
{
printf("Not prime number");
break;
}
i=i+1;
}
if(i==n)
{
printf("Prime number");

}





}
