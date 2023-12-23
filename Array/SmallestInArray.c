//Code to print the position of smallest number in an array.
#include<stdio.h>
int main()
{
    int a[100],i,n,small,index;
    printf("Enter size of array: ");
    scanf("%d",&n);
    printf("Enter numbers: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    small=a[0];
    index=0;
    for(i=0;i<n;i++){
        if(a[i]<small){
            small=a[i];
            index=i;
        }
    }
    printf("Smallest %d is located at %d",small,index);
    return 0;
}