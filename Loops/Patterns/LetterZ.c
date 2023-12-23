/*Pattern:- ***
             *
            ***
*/

#include<stdio.h>
int main()
{
    int i,j,k,n;
    printf("Enter rows: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i==1 || i==n){
            for(j=1;j<=n;j++){
                printf("*");
            }
        }
        else{
            for(k=1;k<=n-i;k++){
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }
    return 0;
}