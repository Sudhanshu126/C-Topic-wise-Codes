//Code to find the sum of series 1/2 + 2/3 + 3/4 +....+ n/(n+1).
#include<stdio.h>
int main()
{
    int n;
    float sum=0;
    printf("Enter number of terms: ");
    scanf("%d",&n);
    while(n>=1){
        sum+=(float)n/(n+1);
        n--;
    }
    printf("The sum is %f",sum);
    return 0;
}