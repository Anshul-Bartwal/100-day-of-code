//Write a program to calculate the area and perimeter of a rectangle given its length and breadth
#include <stdio.h>
int main(){
    float l,b,a,p;
    printf("Enter length and breadth: ");
    scanf("%f %f",&l,&b);
    a=l*b;
    p=2*(l+b);
    printf("The area is: %.2f\n", a);
    printf("The perimeter is: %.2f\n", p);
    return 0;
}
