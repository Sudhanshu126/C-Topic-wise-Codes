//Code to calculate the GCD of two numbers using recursion.
#include<stdio.h>
int gcd(int a, int b);
int main()
{
    int a,b,g;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    if(a>b)
        g=gcd(b,a);
    else
        g=gcd(a,b);
    printf("The GCD is %d",g);
    return 0;
}
int gcd(int a, int b){
    if(b%a==0)
    return a;
    else
    return(gcd(b%a,a));
}