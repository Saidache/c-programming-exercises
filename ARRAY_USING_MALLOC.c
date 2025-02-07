#include <stdio.h>
#include <stdlib.h>
int main() {
int size;
printf("Enter the size of the array: ");
scanf("%d", &size);
int* arr = (int*)malloc(size * sizeof(int));
if (arr == NULL) {
printf("Memory allocation failed.\n");
return 1;
}
printf("Enter elements: ");
for (int i = 0; i < size; i++) {
scanf("%d", &arr[i]);
}
printf("Array elements: ");
for (int i = 0; i < size; i++) {
printf("%d ", arr[i]);
}
printf("\n");
free(arr); // Don't forget to free the allocated memory
return 0;
}