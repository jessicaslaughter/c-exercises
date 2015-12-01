/* Given an ascending sorted array of ints, write an algorithm that pushes all duplicates to the back */

#include <stdio.h>

int main() {
	int const size = 10;
	int i, k, current, next, temp, a[size];
	
	printf("Enter %d elements in ascending order:\n", size);
	for (i = 0; i < size; i++) {
		scanf("%d", &a[i]);
	}

	printf("Original list:\n");
	for (i = 0; i < size; i++) {
		printf("%d\n", a[i]);
	}


	for (i = 0; i < size - 2; i++) {
		if (a[i] == a[i+1]) {
			temp = a[i+1];
			for (k = i + 1; k < size - 1; k++) {
				a[k] = a[k+1];
			}
			a[size-1] = temp;
		}
	}

	printf("List with duplicates in back:\n");
	for (i = 0; i < size; i++) {
		printf("%d\n", a[i]);
	}

	return 0;
}