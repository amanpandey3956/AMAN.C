#include<stdio.h>
struct Date
{

   int day;
   int month;
   int year;
};
main()
{

  struct Date d1;
  printf("Enter date:\n");
  scanf("%d%d%d",&d1.day,&d1.month,&d1.year);
  printf("your date is :\n");
  printf("%d-%d-%d",d1.day,d1.month,d1.year);


}
