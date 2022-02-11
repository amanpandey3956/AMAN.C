#include<stdio.h>
#include<string.h>
main()
{
char string1[15];
char ch;
int i=0,n1=0,n2=0,x;
puts("Enter string:");
gets(string1);
while(string1[i]!='\0')
{
  x=string1[i];
  if(x>=65 && x<=90)
  {
    n1++;
  }
  else if(x>=97 && x<=122)
  {
     n2++;
  }
    i++;

}
printf("Number of Capital letters: %d",n1);
printf("\nNumber of small letters: %d",n2);


}
