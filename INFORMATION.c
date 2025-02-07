#include <stdio.h>
struct Employee {
char name[50];
int age;
float salary;
};
int main() {
struct Employee employees[5];
for (int i = 0; i < 5; i++) {
printf("Enter details for employee %d\n", i+1);
printf("Enter name: ");
fgets(employees[i].name, sizeof(employees[i].name), stdin);
printf("Enter age: ");
scanf("%d", &employees[i].age);
printf("Enter salary: ");
scanf("%f", &employees[i].salary);
getchar(); // To capture newline character after entering salary
}
printf("\nEmployee Details:\n");
for (int i = 0; i < 5; i++) {
printf("\nEmployee %d:\n", i+1);
printf("Name: %s", employees[i].name);
printf("Age: %d\n", employees[i].age);
printf("Salary: %.2f\n", employees[i].salary);
}
return 0;
}