//Code to check if a char is a vowel by using switch.
#include<stdio.h>
int main()
{
    char a;
    printf("Type an alphabet: ");
    scanf("%c",&a);
    switch(a){
        case 'A':
        printf("Its a vowel");
        break;

        case 'E':
        printf("Its a vowel");
        break;

        case 'I':
        printf("Its a vowel");
        break;

        case 'O':
        printf("Its a vowel");
        break;

        case 'U':
        printf("Its a vowel");
        break;

        case 'a':
        printf("Its a vowel");
        break;

        case 'e':
        printf("Its a vowel");
        break;

        case 'i':
        printf("Its a vowel");
        break;

        case 'o':
        printf("Its a vowel");
        break;

        case 'u':
        printf("Its a vowel");
        break;

        default:
        if(!(a>='a' && a<='z') || (a>='A' && a<='Z')){
            printf("It is not an alphabet.");
        }
        else{
            printf("It is not a vowel.");
        }
        break;
    }
    return 0;
}