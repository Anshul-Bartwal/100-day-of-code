#include <stdio.h>

int main(){
    char name[100];
    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);

    FILE *pFile = fopen("info.txt", "w");

    fprintf(pFile,"Name: %sAge: %d\n",name,age);
    printf("Data successfully saved to info.txt\n");
    fclose(pFile);
}