#include<stdio.h>
main()
{
    int arr[3] [3];
    int i,j,x=0;
    for(i=0;i<3;i=i+1)
    {
        for(j=0;j<3;j=j+1)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nArray items are:\n");
    for(i=0;i<3;i=i+1)
    {
        for(j=0;j<3;j=j+1)
        {
            if(j<i && arr[i][j]==0)
            {
                x=x+1;
            }

        }

    }
    if(x==3)
    {
        printf("upper triangular matrix");
    }
}
