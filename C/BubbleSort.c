#include <stdio.h>

void printer(int * arr, char size) {
	for(int i = 0; i < size; i++) {
		printf("%d ", *(arr+i));
	}
	printf("\n");
}

void bubble_sort(int *arr, char size, char logic) {
	/* logic = 1 for increasing order, logic = 0 for decreasing order */
	logic ? printf("Attempting to sort in increasing order\n") 
					: printf("Attempting to sort in decreasing order\n");
	//printf("Attempting to sort in increasing order\n");
	int temp;
	for(int j = 0; j < (size - j); j++) {
		for(int i = 0; i < size-1; i++) {
				#if logic == 1
					if(arr[i] > arr[i+1]) {
				#else
					if(arr[i] < arr[i+1]) {
				#endif
						temp = *(arr+i);
						*(arr+i) = *(arr+i+1);
						*(arr+i+1) = temp;
			}
		}
	}
}

void main() {

	int arr[] = {0, 12, 1, 20, -20, -14, 17};
	char size = sizeof(arr) / sizeof(int);
	printf("Original array \n");
	printer(arr, size);
	bubble_sort(arr, size, 0);
	printf("Bubble sorted array \n");
	printer(arr, size);

}