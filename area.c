#include <stdio.h>
int main() {
float length, breadth, area;
printf("Enter length : \n");
scanf(" %f", &length);
printf("Enter breadth : \n");
scanf(" %f", &breadth);
area = length * breadth; 
printf("Area: %.2f\n", area);
return 0;
}