//Check if one string is a rotation of another
#include <stdio.h>
#include <string.h>

int main(){
    char s1[100];
    char s2[100];
    printf("Enter String 1: ");
    scanf("%s",s1);

    printf("Enter String 2: ");
    scanf("%s",s2);

    char temp[200];
    strcpy(temp,s1);
    strcat(temp,s1);

    if (strstr(temp,s2) != NULL){
        printf("Yes its a rotation");

    }else{
        printf("No not a rotation");
    }

    return 0;


}