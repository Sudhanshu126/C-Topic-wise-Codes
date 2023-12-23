//Code to find the roots of a quadratic equation.
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d;
    float r1,r2;
    printf("Type a,b,c of a quadratic equation: ");
    scanf("%d %d %d",&a,&b,&c);
    d=(b*b)-(4*a*c);
    if(d>=0){       
        r1=(-b+sqrt(d))/(2*a);
        r2=(-b-sqrt(d))/(2*a);
        //printing real roots as r1 and r2
        printf("The roots are real,\nr1=%f\nr2=%f",r1,r2);
    }
    else{           
        d=-d;   //as d is -ve we make it +ve for sqrt()
        r1=(-(float)b/(2*a));
        r2=sqrt(d)/(2*a);
        //printing imaginary roots as r1+ir2 and r1-ir2
        printf("The roots are imaginary,\nr1=%f+%fi\nr2=%f-%fi",r1,r2,r1,r2);
    }
    return 0;
}