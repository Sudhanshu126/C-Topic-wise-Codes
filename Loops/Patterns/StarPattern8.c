/*Pattern:- *
              **
            *
*/

#include<stdio.h>
int main()
{
    int i,j,k,n;
    printf("Enter rows: ");
    scanf("%d",&n);
    int rows=2*n-1;
    for(i=1;i<=rows;i++){
        for(j=1;j<=3*i-2;j++){
            if(i<=n){
                if(j<=2*i-2){
                    printf(" ");
             }else{
                    printf("*");
                }
            }
            if(i>n && j<6*n-3*i-1){
                if(j<=2*(2*n-i-1)){
                    printf(" ");
                }else{
                    printf("*");
                }
            }
        }
        printf("\n");
    }
}