#include <stdio.h>

int main() {
    int a, b, c, largest;

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    printf("Enter the third number: ");
    scanf("%d", &c);

    if (a > b && a > c) {
        largest = a;
    } else if (b > c) {
        largest = b;
    } else {
        largest = c;
    }

    printf("The largest number is: %d\n", largest);

    return 0;
}
