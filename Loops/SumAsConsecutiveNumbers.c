//Code to find if a number can be expressed in the sum of 2 consecutive numbers.
#include<stdio.h>
int main()
{
    int n,found=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i=1;i<n;i++){
        if(2*i+1==n){
            printf("%d = %d + %d\n",n,i,i+1);
            found=1;
        }
    }
    if(found==0){
        printf("%d cannot be expressed in the sum of 2 consecutive numbers.",n);
    }
    return 0;
}