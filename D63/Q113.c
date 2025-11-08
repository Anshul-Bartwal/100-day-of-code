#include <stdio.h>
int quickSelect(int arr[],int low,int high,int k){
    int pivot=high;
    int i=low;

    for(int j=low;j<high;j++){
        if(arr[j] <= arr[pivot]){
            int temp= arr[i];

            arr[i] = arr[j];
            arr[j] = temp;
            i++;
        }
    }

    int temp=arr[]

}

int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    printf("Enter k: ");
    scanf("%d",&k);

    

}





