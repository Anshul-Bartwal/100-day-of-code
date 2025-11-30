//Find the sum of array elements.
#include <stdio.h>
int main(){
    int n;
    int sum=0;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        printf("Enter element %d: ",i+1); //count
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    printf("Sum is: %d",sum);
    return 0;

}
