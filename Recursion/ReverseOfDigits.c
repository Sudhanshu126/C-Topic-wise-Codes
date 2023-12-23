//Code to find the reverse of a number using recursion.
#include<stdio.h>
int rev(int n);
int main()
{
    int n,r;
    printf("Enter a number : ");
    scanf("%d",&n);
    r=rev(n);
    printf("The reverse is %d",r);
    return 0;
}
int rev(int n){
    static int r;
    r=r*10+n%10;
    if(n/10==0)
        return n;
    else
        rev(n/10);
    return r;
}