#include<stdio.h>
main()
{
    int arr[3] [3];
    int i,j;
    for(i=0;i<3;i=i+1)
    {
        for(j=0;j<3;j=j+1)
        {
            printf("\nEnter item at [%d][%d]\n",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nArray items are:\n");
    for(i=0;i<3;i=i+1)
    {
        for(j=0;j<3;j=j+1)
        {
            printf("%d",arr[i][j]);

        }
        printf("\n");
    }
}
