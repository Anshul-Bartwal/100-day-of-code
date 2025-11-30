// Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
#include <stdio.h>
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    int nums[n];
    printf("Enter elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&nums[i]);
    }

    int answer[n];

    int prefix=1;
    for(int i=0;i<n;i++){
        answer[i]=prefix;
        prefix*=nums[i];
    }
    int suffix=1;
    for(int i=n-1;i>=0;i--){
        answer[i] *=suffix;
        suffix*=nums[i];
    }

    for(int i=0;i<n;i++){
        printf(" %d",answer[i]);

    }

    return 0;
    
}