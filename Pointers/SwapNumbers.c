//WAP to swap two numbers using call by reference.
#include<stdio.h>
void swap(int*, int*);
int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    printf("Before swap\na= %d, b=%d\n",a,b);
    swap(&a,&b);
    printf("After swap\na= %d, b=%d\n",a,b);
    return 0;
}
void swap(int *a, int *b){
    int t=*a;
    *a=*b;
    *b=t;
}