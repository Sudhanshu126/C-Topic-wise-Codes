//Code to print the transpose of a matrix.
#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],i,j,n,m;
    printf("Enter the dimension of matrix: ");
    scanf("%d %d",&n,&m);
    printf("Enter matrix element:\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&a[i][j]);
            b[j][i]=a[i][j];
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}