//Code to sort an array by insertion sort.
#include<stdio.h>
int main()
{
    int a[100],i,j,n,temp;
    printf("Enter array size: ");
    scanf("%d",&n);
    printf("Enter numbers: ");
    for(i=0;i<n;i++){   //Input loop
        scanf("%d",&a[i]);
    }
    for(i=1;i<n-1;i++){ //Sorting loop
        temp=a[i];
        for(j=i-1;j>=0;j--){
            if(a[j]>temp){
                a[j+1]=a[j];
            }else{
                break;
            }
        }
        a[j+1]=temp;
    }
    printf("Sorted array is\n");
    for(i=0;i<n;i++){   //Printing loop
        printf("%d ",a[i]);
    }
    return 0;
}