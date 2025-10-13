//Count frequency of a given character in a string.

#include <stdio.h>
int main(){
    char str[100];
    printf("Enter String: ");
    fgets(str,sizeof(str),stdin);
    char toFind;
    printf("Enter Character to search: ");
    scanf("%c",&toFind);
    int i=0;
    int count=0;
    while (str[i]!= '\0'){
        if (str[i] == toFind){
            count++;
        }
        i++;
    }
    printf("%d",count);
    return 0;
}