//Code to find the n terms of Fibonacci series
#include<stdio.h>
int main()
{
    int n,a=-1,b=1,c,i;
    printf("How many terms you need from Fibonacci series: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){     //for(init;condition;incriment){code}
        c=a+b;
        a=b;
        b=c;
        printf("%d ",c);
    }
    return 0;
}