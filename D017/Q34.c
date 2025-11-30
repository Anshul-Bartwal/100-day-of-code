//Write a program to check if a number is prime.
#include <stdio.h>
int main(){
    int n;
    int count=0;
    int flg=0;
    printf("Enter Number: ");
    scanf("%d",&n);
    if (n%2 == 0 && n!=2){
        printf("Not Prime");

    }else if(n==2){
        printf("Prime");
    }
    else{
        for (int i=3; i<=(n/2)+1;i+=2){
            if (n%i == 0){
                printf("Not Prime");
                flg=1;
                break;

            
            }
            count++;
        

        }
        if (flg==0){
            printf("Prime");
        }
   }
   return 0;
}