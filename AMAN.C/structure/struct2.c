#include<stdio.h>
struct student
{

   int id;
   char name[15];
   struct Marks
   {
     int m1,m2;
   }ob;
};
main()
{

  struct student s1;
  printf("Enter id and name:");
  scanf("%d%s",&s1.id,&s1.name);
  printf("\nEnter marks:");
  scanf("%d%d",&s1.ob.m1,&s1.ob.m2);
  printf("\nYour data:");
  printf("\n%d\t%s",s1.id,s1.name);
  printf("\n%d\t%d",s1.ob.m1,s1.ob.m2);
}
