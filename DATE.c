#include <stdio.h>
struct Date {
int day;
int month;
int year;
};
int main() {
struct Date date;
printf("Enter day: ");
scanf("%d", &date.day);
printf("Enter month: ");
scanf("%d", &date.month);
printf("Enter year: ");
scanf("%d", &date.year);
printf("The date is: %02d-%02d-%04d\n", date.day, date.month, date.year);
return 0;
}