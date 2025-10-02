#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to check if a character is a vowel
int isVowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

// Function to extract the first syllable (up to and including the first vowel)
void getFirstSyllable(const char *word, char *syllable) {
    int i = 0;
    while (word[i] != '\0') {
        syllable[i] = word[i];
        if (isVowel(word[i])) {
            syllable[i + 1] = '\0';
            return;
        }
        i++;
    }
    syllable[i] = '\0'; // fallback (no vowel found)
}

// Function to apply stammerer code
void stammerer(const char *word, char *result) {
    char syllable[50];
    getFirstSyllable(word, syllable);

    // Repeat syllable twice before the word
    strcpy(result, syllable);
    strcat(result, syllable);
    strcat(result, word);
}

int main() {
    char word[100], result[200];

    printf("Enter a word: ");
    scanf("%99s", word);

    stammerer(word, result);

    printf("Stammered word: %s\n", result);

    return 0;
}
