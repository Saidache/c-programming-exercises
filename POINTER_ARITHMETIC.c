#include <stdio.h>
int main() {
int arr[] = {1, 2, 3, 4, 5};
int* ptr = arr;
printf("First element: %d\n", *ptr);
ptr++;
printf("Second element: %d\n", *ptr);
ptr += 2;
printf("Fourth element: %d\n", *ptr);
return 0;
}