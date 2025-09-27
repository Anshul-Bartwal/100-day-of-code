// Count positive, negative, and zero elements in an array.
#include <stdio.h>
int main(){
    int n;
    int pos=0,neg=0,zero=0;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int arr[n];

    for (int i=0;i<n;i++){
        printf("Enter element %d: ",i+1);
        scanf("%d",&arr[i]);

        if(arr[i] > 0){
            pos+=1;
        }else if(arr[i] < 0){
            neg+=1;
        }else{
            zero+=1;
        }
    }
    printf("Positive : %d\n",pos);
    printf("Negative : %d\n",neg);
    printf("Zero : %d\n",zero);
    return 0;
}