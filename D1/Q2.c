// Write a program to input two numbers and display their sum, difference, product, and quotient.
#include <stdio.h>
int main(){
    int n1, n2, sum, diff, prod;
    float quot;
    printf("Enter two numbers:");
    scanf("%d %d",&n1,&n2);
    sum=n1+n2;
    diff=n1-n2;
    prod=n1*n2;
    if (n2!=0) {
        quot=(float)n1/n2;
        printf("The quotient is: %.2f\n", quot);
    }
    printf("The sum is: %d\n", sum);
    printf("The difference is: %d\n", diff);
    printf("The product is: %d\n", prod);
    
    return 0;
}