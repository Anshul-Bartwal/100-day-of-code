#include <stdio.h>


typedef struct {
    int day;
    int month;
    int year;

} Date;

typedef struct{
    int id;
    char name[50];
    Date joining;

} Employee;


int main(){
    Employee e;
    printf("Name: ");
    scanf("%s",e.name);

    printf("id: ");
    scanf("%d",&e.id);

    printf("Date of joining ( DD/MM/YYYY): ");
    scanf("%d/%d/%d",&e.joining.day,&e.joining.month,&e.joining.year);


    FILE *pFile = fopen("data.dat","ab");

    fwrite(&e,sizeof(e),1,pFile);
    fclose(pFile);

    pFile = fopen("data.dat","rb");

    Employee f;
    while (fread(&f,sizeof(f),1,pFile) ){
        printf("Name: %s\n", f.name);
        printf("ID: %d\n", f.id);
        printf("Joining Date: %02d-%02d-%04d\n",
            f.joining.day,f.joining.month,f.joining.year);
    }
    fclose(pFile);
    
    return 0;

}
