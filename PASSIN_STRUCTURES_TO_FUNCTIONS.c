#include <stdio.h>
struct Rectangle {
int length;
int breadth;
};
int calculateArea(struct Rectangle rect) {
return rect.length * rect.breadth;
}
int main() {
struct Rectangle rect = {10, 5};
printf("Area of rectangle: %d\n", calculateArea(rect));
return 0;
}