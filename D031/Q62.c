// Reverse an array without taking extra space.
#include <stdio.h>


int main()
{
    int n, i, element;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input the elements of the array
    
    for (i = 0; i < n; i++)
    {
        printf("Enter element %d:", i+1);
        scanf("%d", &arr[i]);
    }

    //a =a+b
    //b=aa-b
    //a=a-b


    for (int i=0;i<n/2;i++){
        arr[i]=arr[i]+arr[(n-1)-i];
        arr[(n-1)-i] = arr[i] - arr[(n-1)-i];
        arr[i]=arr[i]-arr[(n-1)-i];


    }

    printf("Reversed array: ");
    for (int i=0;i<n;i++){
        printf(" %d ",arr[i]);
    }
    return 0;
}