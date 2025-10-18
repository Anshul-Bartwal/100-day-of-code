
//Print all sub-strings of a string.
#include <stdio.h>
int main(){
    char str[100];
    printf("Enter string: ");
    scanf("%s",str);

    int i=0;
    while(str[i] != '\0'){
        for (int j =i;str[j] != '\0';j++){
            printf(" ");

            for (int k=i;k<=j;k++){
                printf("%c",str[k]);
            }
        }
        i++;
    }
}