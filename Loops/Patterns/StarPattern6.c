/*Pattern:- *
            **
            *
*/

#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter column: ");
    scanf("%d",&n);
    for(i=1;i<=n*2-1;i++){
        for(j=1;j<=n;j++){
            if(i<=n && j<=i){
                printf("*");
            }else if(i>n && j<=2*n-i){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}