//Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.
#include <stdio.h>


int majElement(int arr[],int n){

    int num=0,count=0;

    for(int i=0;i<n;i++){
        if(count ==0){
            num=arr[i];
            count=1;
        }else if(arr[i] == num){
            count++;
        }else{
            count--;
        }
    }
    count=0;
    for(int i=0;i<n;i++){
        if(arr[i] == num){
            count++;
        }
    }


    if (count > n/2){
        return num;
    }else{
        return -1;
    }

}



int main(){
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter elements: ");

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("Majority Element: %d",majElement(arr,n));
    return 0;

    



}