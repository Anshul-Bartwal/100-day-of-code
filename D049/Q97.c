//rint the initials of a name.
#include <stdio.h>
int main(){
    char name[100];
    printf("Enter name: ");
    fgets(name,sizeof(name),stdin);
    int i=0;
    while(name[i] != '\0'){

        if (i==0){
            printf("%c ",name[0]);
        }
        else if (name[i] == ' '){
            printf("%c ",name[i+1]);
        }
        i++;
    }
    return 0;
}