//Code to check if a number can be expressed in the sum of two prime numbers.
#include<stdio.h>

int checkPrime(int n);

int main()
{
    int number,expressed=0;
    printf("Enter a positive number: ");
    scanf("%d",&number);
    if(number==0 || number==1){
        printf("%d cannot be expressed in the sum of prime numbers.",number);
    }
    else{
        for(int i=2;i<=number/2;i++){
            if(checkPrime(i)==0){   //firstly check if i is a prime number.
                if(checkPrime(number-i)==0){    //then check if n-i is also a prime. if yes then print.
                    printf("%d = %d + %d\n",number,i,(number-i));
                    expressed=1;
                }
            }
        }
        if(expressed==0){
            printf("%d cannot be expressed in the sum of prime numbers.",number);
        }
    }
}

//function that checks if the number is a prime number or not.
int checkPrime(int n){
    int factors=0;
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            factors=1;
        }
    }
    //returns 0 if prime number else returns 1.
    return factors;
}