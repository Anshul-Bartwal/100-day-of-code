//Write a program to check if a number is a perfect number.
//perfect number
// number where sum of divisors = number
#include <stdio.h>
int main(){
    int n;
    int sum=1;
    int i=2;
    printf("Enter the Number: ");
    scanf("%d",&n);
    int temp=n;
    while (i<=n/2){
        if (n%i == 0){
            sum+=i;
            
            i++;

        }else{
            i++;
        }
        
    }
    if (sum==temp){
        printf("%d is a perfect number",temp);

    }else{
        printf("%d is not a perfect number",temp);
    }
}