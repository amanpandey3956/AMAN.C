#include<stdio.h>

main()
{


    char x;
    printf("Enter A B or C:");
    scanf("%c",&x);
    switch(x)
    {
    case 'A':
    case 'a':
        printf("One");
        break;
    case 'B':
    case 'b':
        printf("Two");
        break;
    case 'C':
    case 'c':
        printf("Three");
        break;
    default:
        printf("Wrong choice");
    }








}
