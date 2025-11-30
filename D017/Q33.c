//Write a program to check if a number is an Armstrong number.
#include <stdio.h>
#include <math.h>
int main(){
    int n ,originaln ,originaln2;
    int sum=0;
    int digit=0;
    printf("Enter Number: ");
    scanf("%d",&n);
    originaln=n;
    originaln2=n;

    while (n!=0){
        n/=10;
        digit++;
    }
    while (originaln!=0) {
        sum+=pow((originaln%10),digit);
        originaln/=10;

    }
    if (sum == originaln2){
        printf("Yes its a armstrong number");
    }else{
        printf("No its not a armstrong number");
    }
    return 0;
    
}