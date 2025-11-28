#include <stdio.h>
typedef struct 
{
    char name[50];
    int roll;
    int marks;
} Student;

int main(){
    Student students[5];
    for(int i=0;i<5;i++){
        printf("Enter name: ");
        scanf("%s",students[i].name);

        printf("Enter Roll No. : ");
        scanf("%d",&students[i].roll);

        printf("Enter Marks : ");
        scanf("%d",&students[i].marks);



    }
    printf("Name | Roll | Marks\n");
    for(int i=0;i<5;i++){
        printf("%s|%d|%d\n",students[i].name,students[i].roll,students[i].marks);
    }
    return 0;
}