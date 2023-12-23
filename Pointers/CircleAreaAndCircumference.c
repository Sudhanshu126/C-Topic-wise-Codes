//WAP to find the area and circumference of a circle using call by refernce.
#include<stdio.h>
void calculate(float*, float*, float*);
int main()
{
    float radius,area,circum;
    printf("Enter radius of circle: ");
    scanf("%f",&radius);
    calculate(&radius,&area,&circum);
    printf("Area: %f, Circumference: %f\n",area,circum);
    return 0;
}
void calculate(float *radius, float *area, float *circum){
    *area=3.14*(*radius)*(*radius);
    *circum=2*3.14*(*radius);
}