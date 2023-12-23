//Code to print the ascii value of a character.
#include<stdio.h>
int main()
{
    char a;
    printf("Type a character to know its ASCII value: ");
    scanf("%c",&a);
    printf("The ASCII value of %c=%d",a,a); 
    //%c gives the character output, %d gives the value of characters
    return 0;
}