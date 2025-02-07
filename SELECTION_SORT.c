#include <stdio.h>
void selectionSort(int arr[], int size) {
for (int i = 0; i < size - 1; i++) {
int minIdx = i;
for (int j = i + 1; j < size; j++) {
if (arr[j] < arr[minIdx]) {
minIdx = j;
}
}
if (minIdx != i) {
int temp = arr[i];
arr[i] = arr[minIdx];
arr[minIdx] = temp;
}
}
}
int main() {
int arr[] = {5, 1, 4, 2, 8};
int size = sizeof(arr) / sizeof(arr[0]);
selectionSort(arr, size);
printf("Sorted array: ");
for (int i = 0; i < size; i++) {
printf("%d ", arr[i]);
}
printf("\n");
return 0;
}