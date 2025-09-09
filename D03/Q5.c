//Write a program to convert temperature from Celsius to Fahrenheit.
#include <stdio.h>
int main(){
    int c;
    printf("Enter in celcius: ");
    scanf("%d", &c);
    printf("Fahrenheit: %f", (c * 9.0/5.0) + 32);
    return 0;
}

