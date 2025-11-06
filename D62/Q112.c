#include <stdio.h>
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }


    //kadanes's algo
    int maxSum=arr[0];
    int curSum=0;
    for(int i=0;i<n;i++){
        curSum+=arr[i];
        if(maxSum < curSum){
            maxSum= curSum;
        }
        if(curSum<0){
            curSum=0;
        }
    }
    printf("Max sum: %d ",maxSum);
    return 0;
}