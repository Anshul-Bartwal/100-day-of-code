//Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.
#include <stdio.h>
int main(){
    int n;
    printf("Enter Number of elements in array: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter elements of array: ");
    for(int i=0;i<n;i++){

        scanf("%d",&arr[i]);
    }

    int x;
    printf("Enter target: ");
    scanf("%d",&x);

    int l=0;
    int r=n-1;
    int index=-1;
    int flag=0;
    while (l<=r){
        int mid = l + (r-l)/2;
        if(arr[mid] == x){
            r--;
            index=mid;
        }
        else if(arr[mid] > x){
            index=mid;
            r = mid-1;
        }else if(arr[mid] < x){
            l = mid+1;
            

        }

        
    }
    

    printf("%d",index);
    return 0;

}