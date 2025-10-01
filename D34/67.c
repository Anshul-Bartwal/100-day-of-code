// Insert an element in an array at a given position.
#include <stdio.h>
int main(){
    //array elements
    int n;
    printf("Enter number of elements in array: ");
    scanf("%d",&n);
    int arr[n+1];
    printf("Enter %d elements: ",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    //position and element to be inserted
    int pos,ele;
    printf("Enter position and element to be inserted: ");
    scanf("%d %d",&pos,&ele);
    //inserting element
    for (int i=pos;i<n+1;i++){
        int temp=arr[i];
        arr[i]=ele;
        ele=temp;
    }
    //printing array
    printf("Array after insertion: ");
    for(int i=0;i<n+1;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}