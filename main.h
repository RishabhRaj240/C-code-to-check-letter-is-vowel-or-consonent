#include <stdio.h>

int main() {
    char ch;

    // Prompt the user to enter a character
    printf("Enter a character: ");
    scanf_s("%c", &ch);

    // Convert uppercase letters to lowercase to simplify the switch case
    if (ch >= 'A' && ch <= 'Z') {
        ch = ch + 32;
    }

    // Switch case to check for vowels or consonants
    switch (ch) {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("%c is a vowel.\n", ch);
        break;
    default:
        if ((ch >= 'a' && ch <= 'z')) {
            printf("%c is a consonant.\n", ch);
        }
        else {
            printf("%c is not a valid alphabet letter.\n", ch);
        }
        break;
    }

    return 0;
}
