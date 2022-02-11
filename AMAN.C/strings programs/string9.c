#include<stdio.h>
#include<string.h>
main()
{

int x=10,y;
char string1[15],string2[15];
printf("\nEnter string1:");
scanf("%s",string1);
printf("\nEnter string2:");
scanf("%s",string2);
strcat(string1,string2);
printf("%s",string1);


}
