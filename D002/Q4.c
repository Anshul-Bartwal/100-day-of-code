#include <stdio.h>
#define PI 3.14159
int main(){
    float r, area, circumference;
    printf("Enter the radius of the circle: ");
    scanf("%f", &r);
    circumference = 2 * PI * r;
    printf("The circumference of the circle is: %.2f\n", circumference);
    area = PI * r * r;
    printf("The area of the circle is: %.2f\n", area);
    return 0;
}
// end of program

