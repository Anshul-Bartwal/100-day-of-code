#include <stdio.h>

int main(){
    FILE *pFile = fopen("file.txt","a");
    printf("Text: ");
    char str[100];
    fgets(str, sizeof(str), stdin);
    fputs(str,pFile);
    fclose(pFile);
    return 0;
}