//Code to reverse a 3-digit number. 123->321
#include<stdio.h>
int main()
{
    int n,m,s=0;
    printf("Type a 3 digit number: ");
    scanf("%d",&n);
    m=n%10;     //Returns remainder 
    s=s+(m*100);
    n=n/10;     //Removes last digit as divides by 10 and ignores the decimal
    m=n%10;
    s=s+(m*10);
    n=n/10;
    m=n%10;
    s=s+(m*1);
    n=n/10;
    printf("The sum is %d",s);
    return 0;
}