//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
# include <stdio.h>
int main(){
    float a, b, c;
    printf("Enter lengths of the three sides: ");
    scanf("%f %f %f", &a, &b, &c);
    if (a == b && b == c) {
        printf("Equilateral triangle\n");
    }
    else if (a == b || b == c || a == c) {
        printf("Isosceles triangle\n");
    }
    else {
        printf("Scalene triangle\n");
    }
    return 0;
}