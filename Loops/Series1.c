//Code to find the sum of series 1 + 1/2 + 1/3 + 1/4 +....+ 1/n.
#include<stdio.h>
int main()
{
    int n;
    float sum=0;
    printf("Enter number of terms: ");
    scanf("%d",&n);
    while(n>=1){
        sum+=1.0/n;
        n--;
    }
    printf("The sum is %f",sum);
    return 0;
}