//Write a program to find the product of odd digits of a number.
#include <stdio.h>
int main(){
    int num;
    int sum=1;
    printf("Enter the Number: ");
    scanf("%d",&num);
    while (num!=0){
        //sum*= (num%10)%2 == 0 ? 1 : num%10 ;
        if ((num%10)%2!=0){
            sum*=num%10;
        }
        num/=10;
    }
    printf("%d",sum);
    return 0;
}