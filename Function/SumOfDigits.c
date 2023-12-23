//Code to find the sum of digits of a number by call by value.
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
    int s=0,m;
    while(n>0){
        m=n%10;
        s+=m;
        n/=10;
    }
    return s;
}