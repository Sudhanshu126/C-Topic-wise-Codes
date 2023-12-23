//Code to find the sum of first n natural numbers using recursion.
#include<stdio.h>

int sum(int n);

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("The sum of first %d natural numbers is %d",n,sum(n));
    return 0;
}

int sum(int n){
    if(n==1){
        return 1;
    }
    int summ=sum(n-1)+n;
    return summ;
}