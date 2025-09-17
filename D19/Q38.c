//Write a program to find the sum of digits of a number.
#include <stdio.h>
int main(){
    int num;
    int sum=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    while (num!=0){
        sum+=num%10;
        num/=10;
    }
    printf("%d",sum);
    return 0;
}
