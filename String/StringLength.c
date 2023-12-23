//Code to find the length of a string.
#include<stdio.h>
#include<string.h>
int main()
{
    int len;
    char str[20];
    printf("Enter string: ");
    fgets(str,20,stdin);
    len=strlen(str);
    if(str[len-1]=='\n')
    len--;
    printf("The length of string is %d",len);
    return 0;
}