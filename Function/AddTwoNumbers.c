//Code to add two numbers by call by value.
#include<stdio.h>
void sum();
int main()
{
    sum();
    return 0;
}
void sum(){
    int a,b,s;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    s=a+b;
    printf("The sum is %d",s);
    return;
}