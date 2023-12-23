//Code to print the factorial of a number using call by value.
#include<stdio.h>
int fact(int n);
int main()
{
    int n,f;
    printf("Enter a number: ");
    scanf("%d",&n);
    f=fact(n);
    printf("The factorial is %d",f);
    return 0;
}
int fact(int n){
    int i=1,f=1;
    while(i<=n){
        f*=i;
        i++;
    }
    return f;
}