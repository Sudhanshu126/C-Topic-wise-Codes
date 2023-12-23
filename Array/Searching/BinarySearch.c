//Code to perform binary search.
#include<stdio.h>
int main()
{
    int a[100],n,i,num,end,beg,mid,index,temp;
    printf("Enter array size: ");
    scanf("%d",&n);
    printf("Enter numbers: ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    //Sorting array(bubble sort)
    for(i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("Enter number to search: ");
    scanf("%d",&num);
    beg=0;
    end=n-1;
    while(beg<=end){
        mid=(beg+end)/2;
        if(a[mid]==num){
            index=mid;
            break;
        }else if(a[mid]>num)
        end=mid-1;
        else
        beg=mid+1;
    }
    printf("After sorting array\nThe number is at index %d\n",index);
    return 0;
}