#include<stdio.h>
#include<conio.h>
main()
{
int a,b,c;
char choice;
do
{
printf("\nEnter number:");
scanf("%d%d",&a,&b);
c=a+b;
printf("\nAddition is %d",c);

printf("\nDo you want to continue?(y/n):");

choice=getche();



}
while(choice=='y');










}
