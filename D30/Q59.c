// Count even and odd numbers in an array
#include <stdio.h>
int main(){
    int n;
    int even=0,odd=0;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int arr[n];

    
    for (int i=0;i<n;i++){
        printf("Enter element %d: ",i+1); //count
        scanf("%d",&arr[i]);


        if(arr[i]%2 == 0){
            even+=1;
        }else{
            odd+=1;
        }
    }
    printf("Even : %d\n",even);
    printf("Odd : %d",odd);
    return 0;

}



