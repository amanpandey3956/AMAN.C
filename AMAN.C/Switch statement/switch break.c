#include<stdio.h>

main()
{
    int ch;
    printf("Enter your choice");
    float a,b,c;
printf("\nEnter 2 number");
scanf("%f %f",&a,&b);
switch(ch)
{
case 1:
    c=a+b;
    printf("Addition is : %f" , c);
    break;
    case 2:
    c=a-b;
    printf("Subtraction is : %f" , c);
    break;
    case 3:
    c=a*b;
    printf("Multiplication is : %f" , c);
    break;
    case 4:
    c=a/b;
    printf("Division is : %f" , c);
    break;
}

}

