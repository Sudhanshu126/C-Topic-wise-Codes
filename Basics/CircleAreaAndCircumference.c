//Code to print the area and circumference of a circle.
#include<stdio.h>
int main()
{
    int r;
    float ar,cf; //Using float because answer comes in decimal
    printf("Type the radius of the circle: ");
    scanf("%d",&r);
    ar=3.14*r*r;
    cf=2*3.14*r;
    printf("The area of circle is %f\nAnd the circumference is %f",ar,cf);
    return 0;
}