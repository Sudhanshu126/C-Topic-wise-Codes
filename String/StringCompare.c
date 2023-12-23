//Code to compare two strings.
#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    char a[20],b[20];
    printf("Enter first string: ");
    fgets(a,20,stdin);
    printf("Enter second string: ");
    fgets(b,20,stdin);
    n=strcmp(a,b);
    if(n==0)
    printf("Strings are equal");
    else
    printf("Strings are unequal");
    return 0;
}