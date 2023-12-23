//Code to calculate pow(x,y) using recursion.
#include<stdio.h>
int _pow(int x, int y);
int main()
{
    int x,y,p;
    printf("Enter base and power: ");
    scanf("%d %d",&x,&y);
    p=_pow(x,y);
    printf("The number is %d",p);
    return 0;
}
int _pow(int x, int y){
    if(y==0)
        return 1;
    else
        return(x*_pow(x,y-1));
}