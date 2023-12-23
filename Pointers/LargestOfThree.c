//WAP to find the largest among 3 numbers using pointers.
#include <stdio.h>
void largest(int*, int*, int*, int*);
int main()
{
    int a,b,c,large;
    printf("Enter three numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    largest(&a,&b,&c,&large);
    printf("%d is largest\n",large);
    return 0;
}
void largest(int *a, int *b, int*c, int *large){
    if(*a>*b){
        if(*a>*c)
        *large=*a;
        else
        *large=*c;
    }else{
        if(*b>*c)
        *large=*b;
        else
        *large=*c;
    }
}