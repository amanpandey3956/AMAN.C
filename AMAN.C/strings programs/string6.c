
#include<stdio.h>
main()
{

char string1[15],string2[15];
int x;
printf("Enter string1:\n");
scanf("%s",string1);
printf("Enter string2:\n");
scanf("%s",string2);
x=strcmp(string1,string2);
x=strcmpi(string1,string2);
if(x==0)
{
printf("Equals");
}
else
{

printf("Not equals");

}




}
