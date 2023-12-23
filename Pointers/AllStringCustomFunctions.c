//Code to create custom string manipulation functions from string.h header file
#include<stdio.h>

int len(char *);    //Finds length
int cmp(char *, char *);    //Compares strings
void cat(char *, char *);   //Concatenate strings
void rev(char *);   //Reverses string
void copy(char *, char *);  //Copies string

int main()
{
    char a[]="Hi",b[]="Hello";
    printf("%d, %d\n",len(a),cmp(a,b));
    cat(a,b);
    puts(a);
    rev(b);
    puts(b);
    copy(a,b);
    puts(a);
    return 0;
}

int len(char *s){
    int length = 0;
    while(*s!='\0'){
        length++;
        s++;
    }
    return length;
}
int cmp(char *s1, char *s2){
    while(*s1==*s2){
        if(*s1=='\0'){
            return 0;
        }
        s1++;
        s2++;
    }
    return *s1-*s2;
}
void cat(char *s1, char *s2){
    while(*s1!='\0')
    s1++;
    while(*s2!='\0'){
        *s1=*s2;
        s1++;
        s2++;
    }
    *s1='\0';
}
void rev(char *s){
    char *end, temp;
    end=s;
    while(*end!='\0')
    end++;
    end--;
    while(s<end){
        temp=*s;
        *s=*end;
        *end=temp;
        s++;
        end--;
    }
}
void copy(char *s1, char *s2){
    while(*s2!=0){
        *s1=*s2;
        s1++;
        s2++;
    }
    *s1='\0';
}