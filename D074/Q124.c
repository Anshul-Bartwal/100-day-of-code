#include <stdio.h>
int main(){
    FILE *src = fopen("source.txt", "r");
    FILE *dest = fopen("destination.txt", "w");
    char ch;
    while((ch = fgetc(src)) != EOF){
        fputc(ch, dest);
    }
    printf("File Copied Successfully");
    fclose(src);
    fclose(dest);
    return 0;

}