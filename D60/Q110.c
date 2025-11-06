//Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.

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
    
    int k;
    printf("Enter k: ");
    scanf("%d",&k);

    int dequeue[n];
    int front =0;
    int rear=0;

    // initial dequeue
    for(int i=0;i<k;i++){
        while(front<rear && arr[i]>arr[dequeue[rear-1]]){
            rear--;
        }

        dequeue[rear++] = i;
    }

    printf("%d ", arr[dequeue[front]]);
    for(int i=k;i<n;i++){
        //remove elements outside of window
        while(front<rear && dequeue[front] < i-k){
            front++;
        }

        //removing smaller elements
        while (front<rear  && arr[i]>arr[dequeue[rear-1]]){
            rear--;
        }

        dequeue[rear++] =i;

        printf(" %d ",arr[dequeue[front]]);
        
        
    }

    return 0;

}