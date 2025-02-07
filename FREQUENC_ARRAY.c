#include <stdio.h>
int main() {
int arr[] = {5, 1, 4, 2, 8, 1, 4};
int size = sizeof(arr) / sizeof(arr[0]);
int freq[size];
for (int i = 0; i < size; i++) {
freq[i] = -1;
}
for (int i = 0; i < size; i++) {
if (freq[i] == -1) {
int count = 1;
for (int j = i + 1; j < size; j++) {
if (arr[i] == arr[j]) {
count++;
freq[j] = 0; // Mark duplicate elements
}
}
freq[i] = count;
printf("Element %d occurs %d times\n", arr[i], count);
}
}
return 0;
}