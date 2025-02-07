#include <stdio.h>
#include <ctype.h>
int countWords(FILE* file) {
int count = 0;
char ch;
int inWord = 0;
while ((ch = fgetc(file)) != EOF) {
if (isalpha(ch)) {
if (!inWord) {
inWord = 1;
count++;
}
} else {
inWord = 0;
}
}
return count;
}
int main() {
FILE* file = fopen("sample.txt", "r");
if (file == NULL) {
printf("File not found.\n");
return 1;
}
int wordCount = countWords(file);
fclose(file);
printf("Number of words in file: %d\n", wordCount);
return 0;
}