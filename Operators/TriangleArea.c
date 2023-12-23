//Code to find area of any triangle
#include<stdio.h>
#include<math.h>    //including math.h library so to use sqrt() function
int main()
{
    int a,b,c,p;
    float s,ar;
    printf("Entern 3 sides of triangle: ");
    scanf("%d %d %d",&a,&b,&c);
    s=(a+b+c)/2;
    ar=sqrt(s*(s-a)*(s-b)*(s-c));   //sqrt(number)
    p=a+b+c;
    printf("The area of triangle is %f\nAnd perimeter is %d",ar,p);
    return 0;
}