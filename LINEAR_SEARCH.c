#include <stdio.h>
int linearSearch(int arr[], int size, int target) {
for (int i = 0; i < size; i++) {
if (arr[i] == target) {
return i;
}
}
return -1; // Not found
}
int main() {
int arr[] = {5, 1, 4, 2, 8};
int target = 4;
int size = sizeof(arr) / sizeof(arr[0]);
int index = linearSearch(arr, size, target);
if (index != -1) {
printf("Element found at index: %d\n", index);
} else {
printf("Element not found\n");
}
return 0;
}