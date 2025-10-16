//Reverse each word in a sentence without changing the word order.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to reverse a portion of a string (from start to end index)
void reverse_substring(char str[], int start, int end) {
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char s[100];

    printf("Enter string: ");
    // Read a full line of text, including spaces
    if (fgets(s, sizeof(s), stdin) == NULL) {
        printf("Error reading input.\n");
        return 1;
    }

    // Remove the trailing newline character from fgets, if it exists
    s[strcspn(s, "\n")] = '\0';

    int start = 0;
    for (int i = 0; i <= strlen(s); i++) {
        // A word ends at a space or at the end of the string
        if (isspace(s[i]) || s[i] == '\0') {
            // The word is from 'start' to 'i-1'
            reverse_substring(s, start, i - 1);
            // The next word starts after the current space
            start = i + 1;
        }
    }

    printf("Reversed sentence: %s\n", s);
    return 0;
}