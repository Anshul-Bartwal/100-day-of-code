//Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.

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
    
    
    int sum=0;
    for(int i=0;i<=r;i++){
        sum+=arr[i];
    }

    int max=sum;
    for(int i=k;i<n;i++){
        
        sum= sum-arr[l]+ arr[i];
        l++;

        if(sum>max){
            max=sum;
        }
    }
    printf(":%d ",max);

}