// Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.
#include <stdio.h>
#include <math.h>
int main(){
    int  n;
    printf("Enter Number: ");
    scanf("%d",&n);
    // O(1) TN method using Sum of AP
    int pivot =-1;
    double y=(n*(n+1)/2);
    double x=sqrt(y);

    if(x == (int)x){
        pivot=(int)x;
    }
    printf("Pivot: %d",pivot);
    return 0;
    
}