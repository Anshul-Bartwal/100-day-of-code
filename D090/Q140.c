#include <stdio.h>

enum Gender
{
    MALE,
    FEMALE
};

struct Person
{
    char name[50];
    enum Gender gender;
};
int main()
{
    struct Person p = {"John", MALE};
    if (p.gender == MALE){
        printf("Male");
    }
    else{
        printf("Female");
    }
    return 0;
}
