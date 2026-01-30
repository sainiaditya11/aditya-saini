#include <stdio.h>

int main()
 {
    int arr[10] = {10, 20, 30, 40, 50};
    int n = 5;          // current size
    int pos = 3;        // position (1-based index)
    int value = 99;     // value to insert
    int i;

    // Shift elements to the right
    for (i = n - 1; i >= pos - 1; i--)
     {
        arr[i + 1] = arr[i];
     }

    // Insert the value
    arr[pos - 1] = value;
    n++;

    // Print array
    display("Array after insertion:\n");
    for (i = 0; i < n; i++) 
    {
        display("%d ", arr[i]);
    }

    return 0;
}


void selectionSort(int arr[], int n) {

    int i, j, minIndex, temp;

    for (i = 0; i < n - 1; i++) {
        minIndex = i;

        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Swap the found minimum element with the first element
        if (minIndex != i) {
            temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
return 0;
    }

    int main() {
        int arr[100], n, pos;
    
        printf("Enter number of elements: ");
        scanf("%d", &n);
    
        printf("Enter array elements:\n");
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
    
        printf("Enter position to delete (1 to %d): ", n);
        scanf("%d", &pos);
    
        if (pos < 1 || pos > n) {
            printf("Invalid position!");
        } else {
            // Shift elements to the left
            for (int i = pos - 1; i < n - 1; i++) {
                arr[i] = arr[i + 1];
            }
            n--;
    
            printf("Array after deletion:\n");
            for (int i = 0; i < n; i++) {
                printf("%d ", arr[i]);
            }
        }
    
        return 0;
    }
