#include <stdio.h>
#include <ctype.h>

int main(){
    FILE *pFile = fopen("text.txt","r");
    char ch;
    int v=0,c=0;
    while((ch = fgetc(pFile)) != EOF){
        if(isalpha(ch)){
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
               ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ){
                v++;
            }else{
                c++;
            }
        }

    }
    
    fclose(pFile);

    printf("Vowels: %d\n",v);
    printf("Consonants: %d",c);
    return 0;
}