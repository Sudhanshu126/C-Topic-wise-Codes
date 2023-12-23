/*Pattern:-  *
            * *
             *
*/


#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter size: ");
    scanf("%d",&n);
    for(i=1;i<=2*n-1;i++){
        for(j=1;j<=2*n-1;j++){
            if(i<=n && (j==n-i+1 || j==n+i-1)){
                printf("*");
            }else if(i>n && (j==i-n+1 || j==3*n-1-i)){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}