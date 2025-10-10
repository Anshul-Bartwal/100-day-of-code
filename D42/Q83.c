//count vowels and consonants in a string.
#include <stdio.h>
int main(){
    char str[50];
    printf("Enter String: ");
    scanf("%s",&str);
    int i=0;
    int v=0,c=0;
    while (str[i] != '\0'){
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' ){
                v+=1;
        }else{
            c+=1;
        }
        i++;
        
        
    }
    printf("Vowels : %d \n",v);
    printf("Consonants : %d \n",c);
    return 0;
        

    


}