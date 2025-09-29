// Merge two arrays.
#include <stdio.h>

int main()
{
    int n1,n2, i, element;
    printf("Enter the number of elements in the array 1: ");
    scanf("%d", &n1);

    int arr1[n1];

    // Input the elements of the array
    
    for (i = 0; i < n1; i++)
    {   
        printf("Enter elements %d:", i+1);
        scanf("%d", &arr1[i]);
    }

    printf("Enter the number of elements in the array 2: ");
    scanf("%d", &n2);

    int arr2[n2];

    // Input the elements of the array 2
    
    for (i = 0; i < n2; i++)
    {   
        printf("Enter elements %d:", i+1);
        scanf("%d", &arr2[i]);
    }



    int newarr[n1+n2];
    for (i=0;i<n1; i++){
        newarr[i] = arr1[i];

    }
    for (i=0;i<n2;i++){
        newarr[n1+i] = arr2[i];
        
    }
    printf("New array: ");
    for (i =0;i<n1+n2;i++){
        printf(" %d ",newarr[i]);
    }
    return 0;
}