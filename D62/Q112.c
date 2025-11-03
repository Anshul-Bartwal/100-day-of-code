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
}