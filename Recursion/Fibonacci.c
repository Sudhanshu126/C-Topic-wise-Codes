//Code to print the fibonacci series by recursion
#include<stdio.h>
int fibo(int n);
int main()
{
    int n,i,f;
    printf("Enter terms: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        f=fibo(i);
        printf("%d, ",f);
    }
    return 0;

}
int fibo(int n){
    if(n==1)
        return 0;
    else if(n==2)
        return 1;
    else
        return(fibo(n-1)+fibo(n-2));
}