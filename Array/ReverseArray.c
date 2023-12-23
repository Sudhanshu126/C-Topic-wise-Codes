//Code to reverse the array.
#include<stdio.h>
int reverse(int arr[], int n);
int main()
{
    int numbers[]={1,2,3,4,5,6,7,8,9};
     for(int i=0;i<9;i++){
        printf("%d  ",numbers[i]);
    }
    printf("\n");
    reverse(numbers, 9);        //Calling reverse function.
    for(int i=0;i<9;i++){
        printf("%d  ",numbers[i]);
    }
    return 0;
}
int reverse(int arr[], int n){      //Call by reference as array is a pointer.
    for(int i=0;i<n/2;i++){
        int val=arr[i];
        arr[i]=arr[n-i-1];      //Reverses by swapping ith term from beginning and ending.
        arr[n-i-1]=val;         //Reverses 1st and last term, 2nd and 2nd last term and so on.
    }
}