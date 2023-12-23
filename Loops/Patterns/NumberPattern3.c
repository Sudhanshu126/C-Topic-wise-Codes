/*Pattern:- 2
            24
            246
*/

#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter rows: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%d",2*j);
        }
        printf("\n");
    }
    return 0;
}