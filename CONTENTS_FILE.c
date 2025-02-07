#include <stdio.h>
int main() {
FILE* file = fopen("hello.txt", "r");
if (file == NULL) {
printf("File not found.\n");
return 1;
}
char ch;
while ((ch = fgetc(file)) != EOF) {
    putchar(ch);
}
fclose(file);
return 0;
}