#include<stdio.h>

main()
{
    int arr[2][2];
    int i,j,row,col,address,base;
    for(i=0;i<2;i=i+1)
    {
        for(j=0;j<2;j=j+1)
        {
            printf("\n [%d][%d] %u",i,j,&arr[i][j]);
        }
    }

     printf("\nstarting adress: %u",&arr[0][0]);
     printf("\nEnter row index and col index:\n");
    scanf("%d%d",&row,&col);
    base=arr;
    address=base+4*(row*2+col);
    printf("\nAddress is %u",address);






}
