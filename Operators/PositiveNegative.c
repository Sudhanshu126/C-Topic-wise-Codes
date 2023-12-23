//Code to find if the given number is positive, negetive or zero.
#include<stdio.h>
int main()
{
    int num;
    printf("Input a number to check: ");
    scanf("%d",&num);
    if(num>0)
    printf("The number is positive");
    else if(num<0)
    printf("The number is negetive");
    else
    printf("The number is zero");
    return 0;
}