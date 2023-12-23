/*Pattern:-   1
             12
            123
*/

#include<stdio.h>
int main()
{
    int i,j,k,n;
    printf("Enter rows: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        k=1;
        for(j=1;j<=n;j++){
            if(j>n-i){
                printf("%d",k++);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}