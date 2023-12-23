//Code to find all prime numbers between two numbers using function.
#include<stdio.h>

int findPrime(int start, int end);

int main()
{
    int start,end;
    int manager;
    printf("Enter two numbers: ");
    scanf("%d %d",&start,&end);
    if(start>end){      //swaps the digit so end is always greater than start.
        manager=start;
        start=end;
        end=manager;
    }
    if(findPrime(start,end)==0){  
        //function inside if() will always run and also return value that can be compared.
        printf("There is no prime number between %d and %d",start,end);
    }
    return 0;
}

int findPrime(int start, int end){
    int factors=0,primes=0;
    while(start<=end){
        for(int i=2;i<start;i++){
            if(start%i==0){
                factors++;
            }
        }
        if(factors==0){
            printf("%d is a prime.\n",start);
            primes++;
        }
        factors=0;  //resetting factor to 0 is important to check factors of next number.
        start++;
    }
    if(--start==end && primes==0){  
            return 0;       //returns 0 if there exist no prime number.
        }
}