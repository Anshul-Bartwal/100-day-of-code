//Replace spaces with hyphens in a string.
#include <stdio.h>
int main(){
    char str[100];
    printf("Enter the string: ");
    fgets(str,sizeof(str),stdin);
    int i=0;
    while(str[i] != '\0'){
        if (str[i] == ' ' ){
            str[i] = '-';
        }
        i++;

    }
    printf("Modified string is : \n %s",str);
    return 0;

}