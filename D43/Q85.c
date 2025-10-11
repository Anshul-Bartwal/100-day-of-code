//Reverse a string.
#include <stdio.h>
#include <string.h>
int main(){
    char str[50];
    printf("Enter String: ");
    scanf("%s",str);

    int len = strlen(str);
    // char rev[len];
    // here there is no space for array terminator so it may return garbage values till any random '\0' is found
    char rev[len+1];
    rev[len]=  '\0';
    for (int i=0;i<len;i++){
        rev[len-1-i] = str[i];

    }
    printf("%s",rev);
    return 0;

    

}