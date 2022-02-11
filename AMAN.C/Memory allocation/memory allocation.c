#include<stdlib.h>
#include<stdio.h>
main()
{

int *arr;
int n1,i;
printf("Enter number of item you need:\n");
scanf("%d,&n1");
arr=(int*)malloc(n1*sizeof(int));
printf("Enter array items:\n");
for(i=0;i<n1;i++)
{
scanf("\n%d",arr+i);
}
printf("\nYour array:\n");
for(i=0;i<n1;i++)
{
printf("\n%u=%d",arr+i,*(arr+i));

}
free(arr);
arr=NULL;
}
