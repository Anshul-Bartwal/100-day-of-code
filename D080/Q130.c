#include <stdio.h>
struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {

    FILE *fp;
    struct Student s;
    int n;

    printf("Enter number of students:");
    scanf("%d",&n);
    fp = fopen("students.txt","w");

    for (int i=0;i<n;i++) {
        printf("Enter name:");
        scanf("%s",s.name);  // use %s for simple input without spaces

        printf("Enter roll number:");
        scanf("%d",&s.roll);

        printf("Enter marks:");
        scanf("%f",&s.marks);

        fprintf(fp,"%s %d %.2f\n",s.name,s.roll,s.marks);
    }
    fclose(fp);
    fp = fopen("students.txt","r");
    printf("\n--- Student Records ---\n");
    while (fscanf(fp, "%s %d %f",s.name, &s.roll, &s.marks)!=EOF){
        printf("Name: %s|Roll: %d|Marks:%.2f\n",s.name,s.roll,s.marks);
    }
    fclose(fp);
    return 0;
}
