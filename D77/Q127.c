#include <stdio.h>
#include <ctype.h>

int main(){
    FILE *inp ,*out;
    inp = fopen("input.txt","r");
    out = fopen("output.txt","w");
    char ch;
    while((ch = fgetc(inp)) != EOF){
        fputc(toupper(ch),out);
    }
    fclose(inp);
    fclose(out);
    return 0;
}