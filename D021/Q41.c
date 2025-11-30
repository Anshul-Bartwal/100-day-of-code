//Write a program to swap the first and last digit of a number.
#include <stdio.h>
#include <math.h>
int main(){
    int n;
    printf("Enter the Number: ");
    scanf("%d",&n);
    int lastDigit = n%10;
    //length of digit
    
    int len = floor(log10(abs(n))) + 1; // it tells s to which power of 10 is number raised
    // int temp=n% (pow(10,len)); 
    int temp = n % (int)pow(10,len-1); //number without first Digit
       
    int firstDigit = n / pow(10,len-1);
    int swappedNum = lastDigit * pow(10,len-1) + temp - lastDigit + firstDigit;
    printf("Swapped number: %d",swappedNum);
    return 0;
    

}