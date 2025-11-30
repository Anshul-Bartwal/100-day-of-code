//Print each character of a string on a new line.
#include <stdio.h>
int main(){
    char str[100];
    printf("Enter the string: ");
    scanf("%s",str);
    for (int i=0;i<sizeof(str);i++){
        if (str[i] == '\0'){
            break;
        }
        printf("%c\n",str[i]);
    }
    return 0;
}