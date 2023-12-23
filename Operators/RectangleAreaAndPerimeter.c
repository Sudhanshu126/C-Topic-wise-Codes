//Code to find the area and perimeter of a rectangle.
#include<stdio.h>
int main()
{
    int l,b,ar,p;
    printf("Input the length and breadth: ");
    scanf("%d %d",&l,&b);
    ar=l*b;
    p=2*(l+b);
    printf("The area of rectangle is %d\nAnd the perimeter is %d",ar,p);
    return 0;
}