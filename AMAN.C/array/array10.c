#include<stdio.h>
main()
{
    int arr1[3] [3],arr2[3] [3],arr3[3] [3];
    int i,j;
    printf("\nEnter First Array:\n");
    for(i=0; i<3; i=i+1)
    {
        for(j=0; j<3; j=j+1)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("\nEnter second Array:\n");
    for(i=0; i<3; i=i+1)
    {
        for(j=0; j<3; j=j+1)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
    for(i=0; i<3; i=i+1)
    {
        for(j=0; j<3; j=j+1)
        {
            arr3[i][j]=arr1[i][j]+arr2[i][j];

        }

    }

    for(i=0; i<3; i=i+1)
    {
        for(j=0; j<3; j=j+1)
        {
            printf(" %d",arr3[i][j]);

        }
        printf("\n");
    }
}

