#include <stdio.h>
int main(){
    FILE *f1 = fopen("test.txt", "r");
    if (f1==NULL) {
        printf("Error: File does not exist.");
        return 1;
    }
    printf("File opened successfully.");
    fclose(f1);
    return 0;
}