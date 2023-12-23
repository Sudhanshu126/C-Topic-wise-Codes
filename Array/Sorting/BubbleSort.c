//Code to sort an array by Bubble Sort.
#include<stdio.h>
int main()
{
    int a[100],n,i,j,temp;
    printf("Enter array size: ");
    scanf("%d",&n);
    printf("Enter numbers: ");
    for(i=0;i<n;i++){   //Input loop
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){   //Sorting loop
        for(j=0;j<n;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("Sorted array is\n");
    for(i=0;i<n;i++){   //Printing loop
        printf("%d ",a[i]);
    }
    return 0;
}