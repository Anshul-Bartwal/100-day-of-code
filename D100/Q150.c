#include <stdio.h>
#include <stdlib.h>
typedef struct 
{
    char name[50];
    int roll;
    int marks;
} Student;



    


int main(){
    Student *s = (Student *)malloc(sizeof(Student));

    printf("Enter name: ");
    scanf("%s",s->name);

    printf("Enter Roll No. : ");
    scanf("%d",&s->roll);

    printf("Enter Marks : ");
    scanf("%d",&s->marks);

    printf("Modify Marks\n");
    printf("New Marks: ");
    int tempMarks;
    scanf("%d",&tempMarks);
    s->marks = tempMarks;

    printf("  %s  |  %d  |  %d  ",s->name,s->roll,s->marks);
    return 0;


}