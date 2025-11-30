#include <stdio.h>
int main(){
    int m,n;
    printf("Enter size of first array: ");
    scanf("%d",&m);
    int arr1[m];
    printf("Enter elements of first sorted array: \n");
    for(int i=0;i<m;i++){
        scanf("%d",&arr1[i]);
    }
    printf("Enter size of second array: ");
    scanf("%d",&n);
    int arr2[n];
    printf("Enter elements of second sorted array: \n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr2[i]);
    }
    int merged[m+n];
    int i=0,j=0,k=0;
    while(i<m && j<n){
        if(arr1[i] >= arr2[j]){
            merged[k++]= arr2[j++];
            continue;
        }
        merged[k++] = arr1[i++];
    }
    //either of the array gets exhausted so we  nnedto copy remaining elements
    // Copy remaining elements of arr1
    while (i < m) { 
        merged[k++]= arr1[i++];      
    }

    // Copy remaining elements of arr2
    while (j < n) {
        merged[k++]= arr2[j++];     
    }
    for(int i=0;i<n+m;i++){
        printf("%d ",merged[i]);
    }
    return 0;
}