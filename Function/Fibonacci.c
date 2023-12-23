//Code to print the fibonacci series by call by value.
#include<stdio.h>
void fibo(int n);
int main()
{
    int n;
    printf("Enter terms: ");
    scanf("%d",&n);
    fibo(n);
    return 0;

}
void fibo(int n){
    int i,a=-1,b=1,c;
    for(i=1;i<=n;i++){
        c=a+b;
        printf("%d, ",c);
        a=b;
        b=c;
    }
    return ;
}