#include <stdio.h>
typedef struct 
{
    char name[50];
    int roll;
    int marks;
} Student;

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
    int max=0;
    int maxIndex=0;
    for(int i=0;i<3;i++){
        if (max<students[i].marks){
            max=students[i].marks;
            maxIndex=i;
        }

        
    }
    printf("%s |  %d  |%d\n",students[maxIndex].name,students[maxIndex].roll,students[maxIndex].marks);
    return 0;
}