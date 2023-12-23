//Code to check if a given number is a palindrome or not.
#include<stdio.h>
int main()
{
    int num,remainder,numcopy,reverse=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    numcopy=num;
    while(numcopy>0){
        remainder=numcopy%10;
        reverse=reverse*10+remainder;   //Improved logic than 3reverse.c
        numcopy/=10;
    }
    if(reverse==num){
        printf("This is a palindrome number");
    }else{
        printf("This is not a palindrome number");
    }
}