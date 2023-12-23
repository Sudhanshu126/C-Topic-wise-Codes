/*Pattern:- * *
             *
            * *
*/

#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    n=2*n-1;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i<=n/2 && (j==i || j==n-i+1)){
                printf("*");
            }
            else if(i>n/2 && (j==n-i+1 || j==i)){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}