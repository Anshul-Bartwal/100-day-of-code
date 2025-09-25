// Read and print elements of a one-dimensional array.
#include <stdio.h>
int main(){
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        printf("Enter element %d: ",i+1); //count
        scanf("%d",&arr[i]);
    }
    printf("The elements in the array are: ");
    for (int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
