#include <stdio.h>

int quickSelect(int arr[], int low, int high, int k) {
    while (low <= high) {
        int pivot = arr[high];
        int i = low;

        // Partition step
        for (int j = low; j < high; j++) {
            if (arr[j] <= pivot) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                i++;
            }
        }

        // Place pivot at correct position
        int temp = arr[i];
        arr[i] = arr[high];
        arr[high] = temp;

        int pivotIndex = i;

        // Check where the kth element lies
        if (pivotIndex == k - 1)
            return arr[pivotIndex];
        else if (pivotIndex>k - 1)
            high = pivotIndex- 1;  // search left part
        else
            low=pivotIndex+1;                 // search right part
    }
    return -1;
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int k;
    printf("Enter k: ");
    scanf("%d", &k);

    int result = quickSelect(arr, 0, n - 1, k);
    printf("The %d-th smallest element is: %d\n", k, result);

    return 0;
}
