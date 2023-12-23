//Code to add digits of 3-digit number. 1 2 3->6
#include<stdio.h>
int main()
{
    int n,m,s=0;
    printf("Type a 3 digit number: ");
    scanf("%d",&n);
    m=n%10;     //Returns remainder
    s=s+m;
    n=n/10;     //Removes last digit as divides by 10 and ignores the decimal
    m=n%10;
    s=s+m;
    n=n/10;
    m=n%10;
    s=s+m;
    n=n/10;
    printf("The sum is %d",s);
    return 0;
}