//Find the maximum and minimum element in an array.
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


    int max=arr[0];
    int min=arr[0];
    for (int i=0;i<n;i++){
        if (max<arr[i]){
            max=arr[i];
        }else if (min > arr[i]){
            min=arr[i];
        }
        
    }
    printf("Max: %d\n",max);
    printf("Min: %d",min);
    return 0;
}
