#include <stdio.h>

int main() {
int n;
printf("Enter length of the array:\n");
scanf("%d", &n);

int arr[n];

for(int i=0; i<n; i++){
    printf("Enter element number %d:\n", i+1);
    scanf("%d",&arr[i]);
}
for(int a=0; a<n; a++){
    for(int b=0; b < n-1; b++){
        if(arr[b] > arr[b+1]){
            int tmp = arr[b];
            arr[b] = arr[b+1];
            arr[b+1] = tmp;
        }
    }
}


int rep = -1;

for(int i = 0; i < n - 1; i++){
    if(arr[i] == arr[i+1]) {
        rep = arr[i];
        break; 
    }
}


if(rep != -1){
    printf("The repeating element is: %d", rep);
} else {

    printf("No repeating element");
}

return 0;


}