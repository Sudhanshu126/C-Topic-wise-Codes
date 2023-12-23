//Code to swap two numbers without using 3rd variable.
#include<stdio.h>
int main()
{
    int a,b;
    printf("Type a and b: ");
    scanf("%d %d",&a,&b);
    printf("a=%d and b=%d",a,b);
    a=a+b;      //putting a,b together a=(a+b)
    b=a-b;      //removing b gives a and store in a, so b=(a+b)-b=a
    a=a-b;      //removing a from (a+b) and storing in a, so a=(a+b)-a=b
    printf("\nAfter swaping\na=%d and b=%d",a,b);
    return 0;
}