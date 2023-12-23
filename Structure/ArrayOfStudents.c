//WAP using array of structure to read and display the information of 5 students with following members Roll No., Name, Fees, and DOB.
#include <stdio.h>
struct student{
    int roll, fees;
    char name[20], dob[10];
};
int main()
{
    struct student students[5];
    int i;
    for(i=0;i<5;i++){
        printf("Enter Name, Roll, Fees, DOB of student %d\n", i+1);
        scanf("%s %d %d %s",students[i].name, &students[i].roll, &students[i].fees, students[i].dob);
    }
    printf("Data of students.\n");
    for(i=0;i<5;i++){
        printf("Name: %s, Roll: %d, Fees: %d, DOB: %s\n",students[i].name, students[i].roll, students[i].fees, students[i].dob);
    }
    return 0;
}