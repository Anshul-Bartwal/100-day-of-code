//Count characters in a string without using built-in length functions.

#include <stdio.h>
int main(){
    char str[100];
    printf("Enter the string: ");
    scanf("%s",str);
    int len=0;
    int i=0;
    while (str[i] != '\0'){
        len+=1;
        i+=1;
    }
    printf("Length of the string is: %d",len);
    return 0;
}
