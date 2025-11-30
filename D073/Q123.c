#include <stdio.h>
#include <ctype.h>

int main(){
    FILE *pFile = fopen("info.txt","r");
    char str[500];
    int c=0,w=0,l=1;
    while(fgets(str,sizeof(str),pFile) != NULL){
        for(int i=0;str[i]!='\0';i++){
            char ch = str[i];
            if(ch !='\n'){
                c++;
            }
            if(ch=='\n'){
                l++;
            }
            if(!isspace(ch) && (isspace(str[i+1]) || str[i+1] == '\0')){
                w++;
            }
        }



    }

    printf("Char: %d\n",c);
    printf("Words: %d\n",w);
    printf("Lines: %d",l);


    fclose(pFile);
    return 0;
}