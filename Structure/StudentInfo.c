//WAP using structure to read and display the information about a student with following members Roll No, Name, Father_name, Age, City, Marks, and students_list whose marks are more then 75.
#include <stdio.h>
struct student{
    int roll,age,marks;
    char name[20],father_name[20],city[50];
};
int main()
{
    int n, i;
    struct student students[100];
    printf("Enter the number of students: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("Enter Name, Father's Name, City, Roll, Age, Marks for student %d:\n", i + 1);
        scanf("%s %s %s %d %d %d",students[i].name, students[i].father_name, students[i].city, &students[i].roll, &students[i].age, &students[i].marks);
    }
    printf("\nStudents with marks above 75 are:\n");
    for (i = 0; i < n; i++) {
        if(students[i].marks>75)
            printf("Name: %s, Father's name: %s, City: %s\nRoll no: %d, Age: %d, Marks: %d\n",students[i].name, students[i].father_name, students[i].city, students[i].roll, students[i].age, students[i].marks);
    }
    return 0;
}