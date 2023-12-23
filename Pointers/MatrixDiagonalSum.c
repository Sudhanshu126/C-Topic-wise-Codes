//WAP to compute the sum of main diagonal elements of a matrix using pointers.
#include<stdio.h>
void diagsum(int (*a)[10], int*, int*);
int main()
{
    int a[10][10],n,sum=0;
    printf("Enter size of matrix: ");
    scanf("%d",&n);
    diagsum(a,&n,&sum);
    printf("The sum of diagonal is %d\n",sum);
    return 0;
}
void diagsum(int (*a)[10], int *n, int *sum){
    int i,j;
    printf("Enter numbers: \n");
    for(i=0;i<*n;i++){
        for(j=0;j<*n;j++){
            scanf("%d",&a[i][j]);
            if(i==j)
            *sum+=a[i][j];
        }
    }
}