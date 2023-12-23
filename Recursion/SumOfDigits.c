//Code to find the sum of digits of a number by recursion.
#include<stdio.h>
int sum(int n);
int main()
{
    int n,s;
    printf("Enter a number: ");
    scanf("%d",&n);
    s=sum(n);
    printf("The sum is %d",s);
    return 0;
}
int sum(int n){
    if(n==0)
    return 0;
    else
    return(n%10+sum(n/10));
}