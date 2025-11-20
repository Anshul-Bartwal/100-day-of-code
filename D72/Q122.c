#include <stdio.h>

int main(){
    FILE *pFile = fopen("info.txt","r");
    char str[100];
    while( fgets(str,sizeof(str),pFile) != NULL){
        printf("%s",str);
    }
    fclose(pFile);
    return 0;
}