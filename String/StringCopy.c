//Code to copy one string into another string.
#include<stdio.h>
#include<string.h>
int main()
{
    char a[20],b[20];
    int n;
    printf("Enter a string: ");
    fgets(a,20,stdin);
    printf("Enter another string to copy: ");
    fgets(b,20,stdin);
    n=strlen(b);
    if(b[n-1]=='\n')
    b[n-1]='\0';
    strcpy(a,b);
    printf("Your string is now %s",a);
    return 0;
}