//Code to print the sum of all digits of n digit number.
#include<stdio.h>
int main()
{
    int n,m,sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n>0){
        m=n%10;
        sum+=m;
        n/=10;
    }
    printf("The sum if %d",sum);
    return 0;
}