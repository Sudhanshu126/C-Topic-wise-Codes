//Code to append a string to another string
#include<stdio.h>
#include<string.h>
int main()
{
    char a[50],b[25];
    printf("Enter first string: ");
    fgets(a,25,stdin);
    int n=strlen(a);
    if(a[n-1]=='\n')
    a[n-1]='\0';
    printf("Enter second string: ");
    fgets(b,25,stdin);
    strcat(a,b);
    printf("The appended string is %s",a);
    return 0;
}