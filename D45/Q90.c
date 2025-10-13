//Toggle case of each character in a string.
#include <stdio.h>
#include <ctype.h>
int main(){
    char str[100];
    printf("Enter String: ");
    fgets(str,sizeof(str),stdin);
    
    int i=0;
    while(str[i] != '\0'){
        if (isupper(str[i])){
            str[i] = tolower(str[i]);
        }else if(islower(str[i])){
            str[i] = toupper(str[i]);
        }
        i++;
        

    }
    printf("%s",str);
    return 0;


}