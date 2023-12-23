//Code to convert float to int.
#include<stdio.h>
int main()
{
    float num1;
    int num2;
    printf("Type a float number: ");
    scanf("%f",&num1);
    num2=(int)num1;
    printf("The number %f has been rounded off to %d",num1,num2);
    return 0;
}