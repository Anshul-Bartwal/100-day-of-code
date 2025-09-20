//Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
#include <stdio.h>
int main(){
    int n;
    float sum=1;
    printf("Enter the Number: ");
    scanf("%d",&n);
    for (float i=2,j=3;i<=n*2;i+=2,j+=4){
        
        sum += (i)/(j);
    }
    printf("Approx Sum: %.2f",sum);
}