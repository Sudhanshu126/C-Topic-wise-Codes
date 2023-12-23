//Code to sort an array by selection sort.
#include<stdio.h>
int main()
{
    int a[100],n,i,j,small,temp,index;
    printf("Enter array size: ");
    scanf("%d",&n);
    printf("Enter numbers: ");
    for(i=0;i<n;i++){   //Input loop
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++){ //Sorting loop
        small=a[i];
        index=i;
        for(j=i+1;j<n;j++){
            if(small>a[j]){
                small=a[j];
                index=j;
            }
        }
        temp=a[index];
        a[index]=a[i];
        a[i]=temp;
    }
    printf("Sorted array is\n");
    for(i=0;i<n;i++){   //Printing loop
        printf("%d ",a[i]);
    }
    return 0;
}