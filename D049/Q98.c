#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);

    name[strcspn(name, "\n")] = '\0';

    int i = 0;
    int lastSpace = -1;

    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ')
            lastSpace = i;
    }

    for (i = 0; name[i] != '\0'; i++) {
        if (i == 0) {
            printf("%c. ", name[i]);  
        } else if (name[i] == ' ' && i < lastSpace) {
            printf("%c. ", name[i + 1]);  
        }
    }

    if (lastSpace != -1)
        printf("%s\n", &name[lastSpace + 1]);

    return 0;
}
