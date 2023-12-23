//Code to perform linear search.
#include<stdio.h>
int main()
{
    int a[100],n,i,num,index=-1;
    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("Enter numbers: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter number to search: ");
    scanf("%d",&num);
    for(i=0;i<n;i++){
        if(num==a[i]){
            index=i;
            break;
        }
    }
    if(index==-1)
    printf("The number doesnt exist.");
    else
    printf("The number is at %d index");
    return 0;
}