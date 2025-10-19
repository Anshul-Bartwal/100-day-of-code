//Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.

#include <stdio.h>

int first(int arr[], int n, int target){
    int fIndex=-1;
    int l=0;
    int r=n-1;

    while(l<=r){
        int mid = l+(r-l)/2;
        if(arr[mid] == target){
            fIndex=mid;
            r=mid-1;
        }else if(arr[mid] > target){
            r=mid-1;
        }else if(arr[mid] < target){
            l=mid+1;
        }


    }
    return fIndex;
}

int last(int arr[], int n, int target){
    int lIndex=-1;
    int l=0;
    int r=n-1;

    while(l<=r){
        int mid = l+(r-l)/2;
        if(arr[mid] == target){
            lIndex=mid;
            l=mid+1;
        }else if(arr[mid] > target){
            r=mid-1;
        }else if(arr[mid] < target){
            l=mid+1;
        }

    }
    return lIndex;
}


int main(){

    int n;
    printf("Enter NUmber of elements in array: ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter elements of array: ");
    for(int i=0;i<n;i++){

        scanf("%d",&arr[i]);
    }

    int target;
    printf("Enter target: ");
    scanf("%d",&target);

    printf("Ans: %d,%d",first(arr,n,target),last(arr,n,target));
    return 0;
}