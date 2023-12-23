//Code to find if the given number is odd or even.
#include<stdio.h>
int main()
{
    int a;
    printf("Type a number to check if even or odd: ");
    scanf("%d",&a);
    if(a%2==0)
    {printf("%d is even",a);}     //if(condition){code}
    else
    {printf("%d is odd",a);}    //else{code}
    return 0;
}