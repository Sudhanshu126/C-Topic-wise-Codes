//Code to reverse a string (without using library function)
#include<stdio.h>
#include<string.h>
int main()
{
    char a[20],t;
    int n,i;
    printf("Enter a string: ");
    fgets(a,20,stdin);
    n=strlen(a);
    if(a[n-1]=='\n'){
        a[n-1]='\0';
        n=strlen(a);
    }
    for(i=0;i<n/2;i++){
        t=a[i];
        a[i]=a[n-i-1];
        a[n-i-1]=t;
    }
    printf("The reversed string is %s",a);
    return 0;
}