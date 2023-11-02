#include <stdio.h>

// Function to calculate the sum of array elements
int sumArrayElements(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int size;
    
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int sum = sumArrayElements(arr, size);
    
    printf("The sum of array elements is: %d\n", sum);

    return 0;
}
