#include <stdio.h>

int main() {
    char str[100], ch;
    int frequency = 0;

    printf("Enter a string: ");
    gets(str);

    printf("Enter the character to find its frequency: ");
    scanf("%c", &ch);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            frequency++;
        }
    }

    printf("The frequency of '%c' is: %d\n", ch, frequency);

    return 0;
}
