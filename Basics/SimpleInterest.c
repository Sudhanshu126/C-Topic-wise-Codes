//Code to find the Simple Interest of a number.
#include<stdio.h>
int main()
{
    float p,r,t,si;
    printf("Type principal, rate and time: ");
    scanf("%f %f %f",&p,&r,&t);
    si=(p*r*t)/100;
    printf("The sum is %f",si);
    return 0;
}