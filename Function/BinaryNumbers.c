//Code to display a number in binary form.
#include<stdio.h>
#include<math.h>

void binary(int n);

int main()
{
    int number;
    printf("Enter any number: ");
    scanf("%d",&number);
    printf("Binary: ");
    binary(number);
    return 0;
}

void binary(int n){
    int bit;

    for(int i=1;i<=4;i++){
        if(n<pow(2,8*i)){
            bit=8*i;
            break;      //breaks out of the loop instantly to give as small byte as possible.
        }
    }

    for(int i=bit-1;i>=0;i--){
        if(pow(2,i)<=n){
            printf("1");
            n-=pow(2,i);
        }
        else{
            printf("0");
        }
        bit--;
        if(bit%8==0){       //it gives space after every 8 bits to seperate each bytes.
            printf(" ");
        }
    }
}