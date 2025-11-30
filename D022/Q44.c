//Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
#include <stdio.h>
int main(){
    int n;
    float sum=1;
    printf("Enter the Number: ");
    scanf("%d",&n);
    for (float i=3;i<=n*2+2;i+=2){
        sum+= i/(i+1);

        
    }
    printf("Approx Sum: %.2f",sum);
    
}