#include<stdio.h>
struct student
{

int id;
char name[15];
float marks;
}s1={200,"xyz",38};
main()
{
struct student s2={100,"abc",90};
printf("\nYour data:\n");
printf("\n%d\t%s\t%f",s1.id,s1.name,s1.marks);
}
