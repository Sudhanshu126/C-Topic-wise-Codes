//Code to find if the number is a prime number.
#include<stdio.h>
int main()
{
    int a,c=0,n=2;
    printf("Type a number to check if it is a prime number: ");
    scanf("%d",&a);
    for(n;n<a;n++){
        if(a%n==0){c+=1;}   //If prime then value of c remains 0
    }
    if(c==0){
        printf("%d is a prime number",a);
    }
    else{
        printf("%d is not a prime number",a);
    }
    return 0;
}