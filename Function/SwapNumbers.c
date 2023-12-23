//Code to swap two numbers by call by value.
#include<stdio.h>
void swap(int n, int m);
int main()
{
    int n,m;
    printf("Enter two numbers: ");
    scanf("%d %d",&n,&m);
    printf("a=%d, b=%d\n",n,m);
    swap(n,m);
    return 0;
}
void swap(int n, int m){
    int t=n;
    n=m;
    m=t;
    printf("a=%d, b=%d",n,m);
    return;
}