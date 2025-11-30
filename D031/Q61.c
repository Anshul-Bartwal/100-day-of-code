//Search for an element in an array using linear search.
#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n, i, element;
    bool found = false;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input the elements of the array
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    //Element to be searched
    printf("Enter the element to be searched: ");
    scanf("%d", &element);

    // Linear search algorithm
    for (i = 0; i < n; i++)
    {
        if (arr[i] == element)
        {
            found = true;
            break;
        }
    }

    // Output the result
    // we can also use flag
    if (found)
    {
        printf("Element %d found at index %d.\n", element, i);
    }
    else
    {
        printf("Element %d not found in the array.\n", element);
    }

    return 0;
}