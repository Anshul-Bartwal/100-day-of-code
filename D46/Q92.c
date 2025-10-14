//Find the first repeating lowercase alphabet in a string.

 #include <stdio.h>
 #include <ctype.h>
int main(){
    char str[100];
    printf("Enter String: ");
    fgets(str,sizeof(str),stdin);
    int i=0;
    while(str[i] != '\0'){
        if ( islower(str[i]) && str[i] == str[i+1] ){
            
            printf("%c",str[i]);
            break;
        }

        

        i++;

    }
    return 0;
}