#include<stdio.h>

void add(int *p)
{
   int i,sum=0;
   for(i=0;i<5;i=i+1)
   {
      sum=*p+*(p+1);
   }
   printf("\n%d",sum);




}
main()
{
    int arr[5];
    int i,n,flag=0;
    printf("Enter Array");
    for(i=0;i<5;i=i+1)
    {
        scanf("%d",&arr[i]);
    }
    add(arr);
}
