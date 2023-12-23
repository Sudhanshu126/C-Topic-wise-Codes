//Code to swap two numbers with using 3rd variable.
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Type a and b: ");
    scanf("%d %d",&a,&b);
    printf("a=%d and b=%d",a,b);
    c=a;    //logic
    a=b;
    b=c;
    printf("\nAfter swaping\na=%d and b=%d",a,b);
    return 0;
}