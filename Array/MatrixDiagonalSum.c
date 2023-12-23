//Code to print the sum of diagonal of matrix.
#include<stdio.h>
int main()
{
    int a[10][10],i,j,n,s=0;
    printf("Enter the dimension of matrix: ");
    scanf("%d",&n);
    printf("Enter numbers:\n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
            if(i==j){
                s+=a[i][j];
            }
        }
    }
    printf("The sum of diagonals is %d",s);
    return 0;
}