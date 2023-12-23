//Code to convert Km into m,cm,feet and inch.
#include<stdio.h>
int main()
{
    float km,m,cm,feet,inch;
    printf("Type the length in Km: ");
    scanf("%f",&km);
    m=km*1000;
    cm=m*100;
    feet=km*3280.84;
    inch=feet*12;
    printf("%f Km is %f m, %f cm, %f feet and %f inch",km,m,cm,feet,inch);
    //Be sure to keep the order of variables correct
    return 0;
}