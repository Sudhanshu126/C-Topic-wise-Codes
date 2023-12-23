//Code to check if the given number is armstrong number or not.
#include<stdio.h>
#include<math.h>
int main()
{
    int n,d,m,sum=0;   //pow() returns value as double function so gives pow(5,3)=124 instead of 125.
    printf("Enter a number: ");
    scanf("%d",&n);
    d=n;
    while(n>0){
        m=n%10;
        sum+=pow(m,3);
        n/=10;
    }
    if(sum==d){
        printf("The given number is armstrong number.");
    }
    else{
        printf("The given number is not armstrong number");
    }
    return 0;
}