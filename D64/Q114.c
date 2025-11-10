#include <stdio.h>
#include <string.h>

int main() {
    char s[1000];
    printf("Enter a string: ");
    scanf("%s", s);

    int n = strlen(s);
    int lastIndex[256];  // last occurence of character
    for (int i = 0; i < 256; i++)
        lastIndex[i] = -1;

    int maxLen = 0;
    int start = 0;

    for (int end = 0; end < n; end++) {
        char current = s[end];

        // if character was seen and is inside the current window
        if (lastIndex[(unsigned char)current] >= start)  //eg letter can have-ve index if we use chars like this ñ etc
            start = lastIndex[(unsigned char)current] + 1;

        // update last seen index of this character
        lastIndex[(unsigned char)current] = end;

        // maxLen 
        int windowLen = end - start + 1;
        if (windowLen > maxLen)
            maxLen = windowLen;
    }

    printf("Length of longest substring without repeating characters: %d\n", maxLen);
    return 0;
}
