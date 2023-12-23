//Code to find the determinant of a matrix.
#include<stdio.h>
int main()
{
    int a1,a2,a3,b1,b2,b3,c1,c2,c3,det;
    int order;
    printf("1. 1x1  2. 2x2  3. 3x3\nChoose the order of the matrix: ");
    scanf("%d",&order);
    printf("Enter the elements of a matrix to find its determinant:\n"); //Common code in all conditions is out
    if(order==1){
        scanf("%d",&a1);
        det=a1;
    }else if(order==2){
        scanf("%d %d %d %d",&a1,&a2,&b1,&b2);
        det=a1*b2-b1*a2;
    }else if(order==3){
        scanf("%d %d %d %d %d %d %d %d %d",&a1,&a2,&a3,&b1,&b2,&b3,&c1,&c2,&c3);
        det=a1*(c2*b3-b2*c3)+a2*(c1*b3-b1*c3)+a3*(b1*c2-c1*b2);
    }else{
        printf("Unrecognised order");
    }
    printf("The determinant is %d",det); //Common code in all conditions is out
    return 0;
}