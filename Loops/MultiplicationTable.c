//Code to print the table of any number.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i=1;i<=10;i++){
        printf("%dx%d=%d\n",n,i,i*n);
    }
    return 0;
}