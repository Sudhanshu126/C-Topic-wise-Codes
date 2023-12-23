//Code to print letter starting from A in a pyramid shape.
#include<stdio.h>

void pyramid(int length);

int main()
{
    int length;
    start:printf("Type the length of the pyramid: ");
    scanf("%d",&length);
    if(length<1 || length>=26){
        printf("Try keeping the length between 1 to 26.\n");
        goto start;
    }else{
        pyramid(length);
    }
    return 0;
}

//Too much logic used by me. My brain fell apart.
void pyramid(int length){
    char txt='A';
    int space0=length,space1;
    space1=space0;
    for(int i=1;i<=length;i++){
        while(space0>0){
            printf(" ");
            space0--;
        }
        for(float j=1;j<=2*i-1;j+=1){
            printf("%c",txt);
            if(j<=(float)i-0.5){
                txt++;
            }else{
                txt--;
            }
        }
        printf("\n");
        txt='A';
        space0=space1-1;
        space1--;
    }
    return;
}