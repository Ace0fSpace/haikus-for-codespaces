#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to encode text string
void encode(char *text, int key) {
    key = (key % 26 + 26) % 26; // normalize key to 0-25
    for(int i = 0; text[i]; i++) {
        if(isalpha(text[i])) {
            char base = isupper(text[i]) ? 'A' : 'a';
            text[i] = (text[i] - base + key) % 26 + base;
        }
    }
}
// Function to decode text string
void decode(char *text, int key) {
    encode(text, -key);
}
// Function to encode/decode user text string
int main() {
    char text[1000];
    int key;
    int choice;
// Menu system
    printf("Caesar Cipher\n");
    printf("1. Encode\n");
    printf("2. Decode\n");
    printf("Choose an option: ");
    scanf("%d", &choice);
// User input for text and shift key
    printf("Enter the text: ");
    getchar(); // consume newline
    fgets(text, sizeof(text), stdin);
    text[strcspn(text, "\n")] = 0; // remove newline

    printf("Enter the shift key: ");
    scanf("%d", &key);
// Display result based on user choice
    if(choice == 1) {
        encode(text, key);
        printf("Encoded text: %s\n", text);
    } else if(choice == 2) {
        decode(text, key);
        printf("Decoded text: %s\n", text);
    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}