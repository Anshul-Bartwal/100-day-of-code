// Q111: Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.

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
    int queue[n];
    int front=0;
    int rear=0;
    for(int i=0;i<k;i++){
        if(arr[i]<0){
            queue[rear] = i;
            rear++;
        }

    }//queue with -ve number from 0to k
    if (front < rear)
        printf("%d ", arr[queue[front]]);
    else
        printf("0 ");



    
    for(int i=k;i<n;i++){
        //remove element with index lower than left of window
        while(front<rear && queue[front] <=i-k){ //i-k = left side i = right side
            front++;
        } 

        if(arr[i]<0){
            queue[rear++]=i;
        }

        if (front<rear)
        {
            printf("%d ",arr[queue[front]]);
        }
        else{
            printf("0 ");
        }
        
    }
    return 0;
}
