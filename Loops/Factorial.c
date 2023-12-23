//Code to find factorial of a given number.
#include<stdio.h>
int main()
{
    int n,d,f=1;
    printf("Type a number to get its factorial: ");
    scanf("%d",&n);
    d=n;
    while(d>1){     //while(condition){code}
        f=f*d;
        d-=1;
    }
    printf("The factorial of %d is %d",n,f);
    return 0;
}