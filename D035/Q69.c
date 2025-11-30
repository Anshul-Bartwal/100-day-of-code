//Find the second largest element in an array.
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
    int first=arr[0], second=arr[0];
    for(int i=0;i<n;i++){
        if (arr[i]>first){
            second=first;
            first=arr[i];
        }else if(arr[i]>second && arr[i]!=first){
            second=arr[i];
        }
    }
    printf("The second largest element is: %d\n", second);
    return 0;
}