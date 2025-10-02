// Rotate an array to the right by k positions.
#include <stdio.h>
int main(){
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int k;
    printf("Enter the number of positions to rotate the array: ");
    scanf("%d", &k);
    
    for (int i=0; i<k; i++){
        int last = arr[n-1];
        for (int j=n-1; j>0; j--){
            arr[j] = arr[j-1];
        }
        arr[0] = last;
    }
    printf("The rotated array is: ");
    for (int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    return 0;

}