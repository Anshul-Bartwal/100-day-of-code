// Write a program to take an array arr[] of integers as input, the task is to find the next greater element for each element of the array in order of their appearance in the array. Next greater element of an element in the array is the nearest element on the right which is greater than the current element. If there does not exist next greater of current element, then next greater element for current element is -1.

// N.B:
// - Print the output for each element in a comma separated fashion.
// - Do not use Stack, use brute force approach (nested loop) to solve.

#include <stdio.h>

void greaterElement(int arr[],int n){
    for (int i=0;i<n;i++){
        int index=-1;
        for(int j=i+1;j<n;j++){
            if (arr[i] < arr[j]){
                index=j;
                break;
            }
        }
        if(index != -1){
            printf("%d,",arr[index]);

        }else{
            printf("-1,");
        }  
    }

}
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    greaterElement(arr,n);
    
}