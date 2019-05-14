#include <stdio.h>
#include <limits.h>

int second_max_num(int* a, int size) {
	int max1 = *a;
	int max2 = INT_MIN;

	for (int i = 1; i < size; i++) {
		if (a[i] > max1) {
			max2 = max1;
			max1 = a[i];
		}
		else {
			if (a[i] > max2) {
				max2 = a[i];
			}
		}
	}
	return max2;
}

int main() {
	int arr[10] = {100, 10, 20, 30, 40, 50, 60, 70, 80, 90 };

	int size_arr = sizeof(arr) / sizeof(arr[0]);
	printf("\nSecond biggest number is %d\n", second_max_num(arr, size_arr));

	return 0;
}