/*Pattern:- A
            AB
            ABC
*/

#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter rows: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=65;j<65+i;j++){
            printf("%c",j);
        }
        printf("\n");
    }
    return 0;
}