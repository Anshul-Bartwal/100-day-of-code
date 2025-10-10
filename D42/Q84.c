// Convert a lowercase string to uppercase without using built-in functions.
#include <stdio.h>
int main(){
    char str[50];
    printf("Enter String: ");
    scanf("%s",&str);
    int i=0;
    while (str[i] != '\0'){
        if( str[i] >= 'a' && str[i] <='z'){
            str[i] = str[i] - 32; // take the character -32 positions behind from ascii
            printf("%c",str[i]);
            i++;

        
        }

    }
        
}