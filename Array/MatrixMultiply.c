//Code to multiply two matrix.
#include<stdio.h>
int main()
{
    int a[5][5],b[5][5],c[5][5]={0},m,n,o,p,i,j,k;
    printf("Enter dimension of 1st matrix: ");
    scanf("%d %d",&m,&n);
    printf("Enter dimension of 2nd matrix: ");
    scanf("%d %d",&o,&p);
    if(n!=o){
        printf("Multiplication is impossible");
        return 0;
    }
    printf("Enter in 1st matrix: ");
    for(i=0;i<m;i++){ //Input a
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter in 2nd matrix: ");
    for(i=0;i<o;i++){ //Input b
        for(j=0;j<p;j++){

            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<m;i++){ //Multiply and store in c
        for(j=0;j<p;j++){
            for(k=0;k<n;k++){
                c[i][j]+=a[i][k]*b[k][j];
            }
            printf("%d  ",c[i][j]);//Print c
        }
        printf("\n");
    }
    return 0;
}