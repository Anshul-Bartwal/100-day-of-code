#include <stdio.h>
typedef struct 
{
    char name[50];
    int roll;
    int marks;
} Student;


void display(Student s){
    printf("  %s  |  %d  |  %d  ",s.name,s.roll,s.marks);

}
int main(){
    Student s;

    printf("Enter name: ");
    scanf("%s",s.name);

    printf("Enter Roll No. : ");
    scanf("%d",&s.roll);

    printf("Enter Marks : ");
    scanf("%d",&s.marks);


    display(s);
    return 0;


}