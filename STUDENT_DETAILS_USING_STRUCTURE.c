#include <stdio.h>
struct Student {
char name[50];
int rollNumber;
float marks;
};
int main() {
struct Student student;
printf("Enter student name: ");
fgets(student.name, sizeof(student.name), stdin);
printf("Enter roll number: ");
scanf("%d", &student.rollNumber);
printf("Enter marks: ");
scanf("%f", &student.marks);
printf("\nStudent Details:\n");
printf("Name: %s", student.name);
printf("Roll Number: %d\n", student.rollNumber);
printf("Marks: %.2f\n", student.marks);
return 0;
}