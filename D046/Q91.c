//Remove all vowels from a string.
#include <stdio.h>
int main(){
    char str[100];
    printf("Enter String: ");
    fgets(str,sizeof(str),stdin);
    int i=0;
    while(str[i] != '\0'){
        if ( str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o'|| str[i] == 'u' ){
            i++;
            continue;
        }

        printf("%c",str[i]);

        i++;

    }
    return 0;
}