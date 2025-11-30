#include <stdio.h>
typedef struct 
{
    char name[50];
    int roll;
    int marks;
} Student;
Student topStu(Student *Students){
    int max=0;
    int maxIndex=0;
    for(int i=0;i<3;i++){
        if (max<Students[i].marks){
            max=Students[i].marks;
            maxIndex=i;
        }

        
    }

    return Students[maxIndex];


}
int main(){
    Student students[3];
    for(int i=0;i<3;i++){
        printf("Enter name: ");
        scanf("%s",students[i].name);

        printf("Enter Roll No. : ");
        scanf("%d",&students[i].roll);

        printf("Enter Marks : ");
        scanf("%d",&students[i].marks);



    }
    printf("Name | Roll | Marks\n");
    Student top = topStu(students);
    
    printf("%s |  %d  |%d\n",top.name,top.roll,top.marks);
    return 0;
}