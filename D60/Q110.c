//Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.

#include <stdio.h>
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    int k;
    printf("Enter k: ");
    scanf("%d",&k);

    int l=0;
    int r=k-1;
    
    
    int max=arr[l];
    int secondMax=0;
    for(int i=0;i<=r ;i++){
        if(arr[i]>max){
            secondMax=max;
            max=arr[i];

        }
    }


    
    for(int i=k;i<n;i++){
        if(arr[l] == max){
            if(arr[i] > secondMax){
                
                max = arr[i];

            }else if(arr[i] < secondMax){
                max=secondMax;
            }
        }
        l++;

        
    }
    printf(":%d ",max);

}