//Insert an element in a sorted array at the appropriate position
#include <stdio.h>
int main(){
    int n=10;
    int arr[11] ={1,2,8,9,13,36,66,89,100,130};
    int target;
    printf("Enter the target: ");
    scanf("%d",&target);

    
    int i;

    // Find the position to insert the target
    for (i = 0; i < n; i++){
        if (arr[i] >= target){
            break;
        }
    }

    // Shift elements to the right to make space for the new element
    for (int j = n; j > i; j--){
        arr[j] = arr[j - 1];
    }

    // Insert the target at the found position
    arr[i] = target;
    n++; // Increase the size of the array

    printf("Array after insertion: ");
    for (i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}