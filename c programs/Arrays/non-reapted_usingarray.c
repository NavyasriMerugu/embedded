// C program to print all non repeated elements in an array
#include <stdio.h>

void printNonRepeated(int arr[], int size) {
    int i, j, count;
    
    for (i = 0; i < size; i++) {
        count = 0;
        for (j = 0; j < size; j++) {
            if (i != j && arr[i] == arr[j]) {
                count++;
            }
        }
        if (count == 0) {
            printf("%d ", arr[i]);
        }
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 1, 2, 6, 7, 8, 5, 9, 10};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    printf("The non-repeated elements in the array are: ");
    printNonRepeated(arr, size);
}
//output:the non-repeated elements in the array are :3 4 6 7 8 9 10