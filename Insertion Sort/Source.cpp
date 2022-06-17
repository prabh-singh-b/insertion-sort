#include <iostream>
using namespace std;

void insertion_sort(int arr[], int n) {

	int temp;
	for (int i = 1; i < n; i++) {
			temp = arr[i];
		for (int j = i; j > 0; j--) {
			if (arr[j - 1] > arr[j]) {
				arr[j] = arr[j - 1];
				arr[j - 1] = temp;
			}
			else {
				arr[j] = temp;
				break;
			}
		}
	}

}

int main() {
	int arr[] = { -2,3,4,-1,5,-12,6,1,3 };
	int n = sizeof(arr) / sizeof(int);
	insertion_sort(arr, n);

	for (int x : arr) {
		cout << x << " ";
	}
}