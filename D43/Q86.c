//Check if a string is a palindrome.
#include <stdio.h>
#include <string.h>
int main(){
    char str[50];
    printf("Enter String: ");
    scanf("%s",str);
    int len =  strlen(str);
    int l=0;
    int r = len-1;
    int flag=1;
    while (l!=r){
        if (str[l] != str[r]){
            flag=0;
            break;
        }
        l++;
        r--;
    }
    if (flag == 1){
        printf("Palindrome");
    }else{
        printf("Not Palindrome");
    }
    return 0;
}

