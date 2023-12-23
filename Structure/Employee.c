//WAP using structure within structure to read and display the information about a employee with following members id_name, salary, address (house_no, city, pin_code).
#include <stdio.h>
struct address{
    int house_no, pin_code;
    char city[20];
};
struct employee{
    char id_name[20];
    int salary;
    struct address add;
};
int main()
{
    int i;
    struct employee emp;
    printf("Enter ID Name, Salary, Address (House number, City, Pin Code)\n");
    scanf("%s %d %d %s %d",emp.id_name, &emp.salary, &emp.add.house_no, emp.add.city, &emp.add.pin_code);
    printf("ID Name: %s, Salary: %d, Address: %d, %s, %d\n",emp.id_name, emp.salary, emp.add.house_no, emp.add.city, emp.add.pin_code);
    return 0;
}