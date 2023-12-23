//Code to switch capital letter to small letter and vice versa in a text.
#include<stdio.h>
int main()
{
    char text[20];
    printf("Enter any text: ");
    gets(text);
    for(int i=0;i<20;i++){
        if(text[i]>='a' && text[i]<='z'){
            text[i]-=32;
        }
        else if(text[i]>='A' && text[i]<='Z'){
            text[i]+=32;
        }
    }
    printf("The text became \"%s\"",text);
    return 0;
}