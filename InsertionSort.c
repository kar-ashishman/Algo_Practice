#include <stdio.h>

void printer(int * arr, char size) {
	for(int i = 0; i < size; i++) {
		printf("%d ", *(arr+i));
	}
	printf("\n");
}

void insertion (int * arr, char start, char end) {
	int temp = arr[end];
	for(char i = end; i >= start; i--) {
		arr[i] = arr[i - 1];
	}
	arr[start] = temp;
}

void insertion_sort(int * arr, char size, char logic) {
	/* logic = 1 for increasing order, logic = 0 for decreasing order */
	logic ? printf("Attempting to sort in increasing order\n") 
					: printf("Attempting to sort in decreasing order\n");
	for(char i = 1; i < size; i++) {
		for(char j = 0; j < i ; j++) {
			#if logic == 1
				if(arr[j] > arr[i])
			#else
				if(arr[j] < arr[i])
			#endif
				insertion(arr, j, i);
		}
	}
}


void main() {

	int arr[] = {0, 12, 1, 20, -20, -14, 17};
	char size = sizeof(arr) / sizeof(int);
	printf("Original array \n");
	printer(arr, size);
	insertion_sort(arr, size, 0);
	printf("Insertion sorted array \n");
	printer(arr, size);
}