//Search in a sorted array using binary search.

#include <stdio.h>
int main(){
    int arr[10] ={1,2,8,9,13,36,66,89,100,130};
    int target;
    printf("Enter the target: ");
    scanf("%d",&target);

    int l=0;
    int r=9; // n-1
    int found = 0; // Flag to check if element was found

    while (l <= r){
        // int mid = l + (r - l) / 2; // Avoids potential overflow for large l and r
        int mid = (l + r) / 2; // This is also fine for small arrays

        if (arr[mid] > target){
            r = mid - 1;
        } else if(arr[mid] < target){
            l = mid + 1;
        } else {
            printf("Element found at index %d\n", mid);
            found = 1;
            break;
        }
    }

    if (!found){
        printf("Element not found in the array.\n");
    }
    return 0;
}