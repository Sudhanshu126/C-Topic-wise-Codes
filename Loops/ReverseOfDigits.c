//Code to reverse the digits of n digit number.
#include<stdio.h>
int main()
{
    int n,m,rev=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n>0){
        m=n%10;
        rev=rev*10+m;
        n/=10;
    }
    printf("The reverse if %d",rev);
    return 0;
}