//WAP to find the mean of numbers of an array using pointers.
#include<stdio.h>
void findmean(int*, int*, int*);
int main()
{
    int a[100],n,mean;
    printf("Enter size of array: ");
    scanf("%d",&n);
    findmean(a,&n,&mean);
    printf("The mean is %d\n",mean);
    return 0;
}
void findmean(int *a, int *n, int *mean){
    int i,s=0;
    printf("Enter numbers: ");
    for(i=0;i<*n;i++){
        scanf("%d",&a[i]);
        s+=a[i];
    }
    *mean=s/(*n);
}