// C Program to Find Largest Number Using Dynamic Memory Allocation
#include <stdio.h>
#include <stdlib.h>
void findLargest(int* arr, int N)
{
	int i;
	for (i = 1; i < N; i++) 
{
// Update the largest element
		if (*arr < *(arr + i)) {
			*arr = *(arr + i);
		}
	}

	// Print the largest number
	printf("%d ", *arr);
}
int main()
{
	int i, N = 4;

	int* arr;

	// Memory allocation to arr
	arr = (int*)calloc(N, sizeof(int));

	// Condition for no memory
	// allocation
	if (arr == NULL) {
		printf("No memory allocated");
		exit(0);
	}

	// Store the elements
	*(arr + 0) = 14;
	*(arr + 1) = 12;
	*(arr + 2) = 19;
	*(arr + 3) = 20;

	// Function Call
	findLargest(arr, N);
	
}
 //out put:20