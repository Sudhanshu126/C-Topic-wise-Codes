//WAP to find sum of two complex number using structure and pointer.
#include <stdio.h>
struct complex{
    float real;
    float imaginary;
};
void sum_complex(struct complex *, struct complex *, struct complex *);
int main()
{
    struct complex c1,c2,sum;
    printf("Enter real and imaginary part of C1: ");
    scanf("%f %f",&c1.real,&c1.imaginary);
    printf("Enter real and imaginary part of C2: ");
    scanf("%f %f",&c2.real,&c2.imaginary);
    sum_complex(&c1,&c2,&sum);
    printf("The sum is real: %f, imaginary: %f\n",sum.real,sum.imaginary);
    return 0;
}
void sum_complex(struct complex *c1,struct complex *c2,struct complex *sum)
{
    sum->real=c1->real+c2->real;
    sum->imaginary=c1->imaginary+c2->imaginary;
}