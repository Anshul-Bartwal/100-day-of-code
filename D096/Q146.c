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

    printf("Name: %s\n", e.name);
    printf("ID: %d\n", e.id);
    printf("Joining Date: %02d-%02d-%04d\n",
           e.joining.day,e.joining.month,e.joining.year);
    return 0;

}