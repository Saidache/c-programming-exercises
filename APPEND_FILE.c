#include <stdio.h>
int main() {
FILE* file = fopen("hello.txt", "a");
if (file == NULL) {
printf("File not found.\n");
return 1;
}
fprintf(file, "Appending new content!\n");
fclose(file);
printf("Text appended successfully.\n");
return 0;
}