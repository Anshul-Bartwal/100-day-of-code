#include <stdio.h>
#include <string.h>

int main(){
    char str1[100], str2[100];
    int count1[26]={0};
    int count2[26]={0};

    printf("Enter string 1: \n");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter string 2: \n");
    fgets(str2, sizeof(str2), stdin);
    int l1=strlen(str1);
    for(int i=0;i<l1;i++){
        int index=str1[i] -'a'; //for ascii 
        count1[index]++;

    }
    int l2=strlen(str2);
    for(int i=0;i<l2;i++){
        int index=str2[i] -'a'; //for ascii 
        count2[index]++;

    }
    for(int i=0;i<26;i++){
        if(count1[i] != count2[i]){
            printf("Not anagram");
            return 0;
        }
    }
    printf("Anagrams");
    return 0;




}