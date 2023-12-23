//Code to find the sum of 1! + 2! + 3! + ... + n!  by call by value.
#include<stdio.h>
int sumf();
int main()
{
    int s=sumf();
    printf("The sum is %d",s);
    return 0;
}
int sumf(){
    int s=0,m,i,f=1,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        f*=i;
        s+=f;
    }
    return s;
}