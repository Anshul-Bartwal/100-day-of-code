// Check if two strings are anagrams of each other.
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    int c1[128]={0};
    int c2[128]={0};

    char str1[100];
    printf("Enter String 1: ");
    fgets(str1,sizeof(str1),stdin);

    char str2[100];
    printf("Enter String 2: ");
    fgets(str2,sizeof(str2),stdin);


    for (int i = 0; i< strlen(str1);i++){
        c1[tolower(str1[i])]++;
    }

    for (int i = 0; i< strlen(str2);i++){
        c2[tolower(str2[i])]++;
    }

    for (int i=0;i<128;i++){
        if (c1[i] != c2[i]){
            printf("Not anagrams");
            return 0;
        }


    }
    printf("Anagrams");
    return 0;

}