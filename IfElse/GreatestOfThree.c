//Code to find the greatest of 3 numbers using conditional operator.
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    a>b?(a>c?printf("%d is greatest",a):printf("%d is greatest",c)):(b>c?printf("%d is greatest",b):printf("%d is greatest",c));
    return 0;
}