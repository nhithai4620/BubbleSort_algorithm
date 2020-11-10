#include <iostream>
using namespace std;
void swap(int & a, int & b) {
	int temp = a;
	a = b;
	b = temp;
}

void printArray(int arr[], int N) {
	for (int i = 0; i < N; i++)
		cout << arr[i] << " ";
}
void bubbleSort(int arr[], int N) {
	for (int i = 0; i < N - 1; i++)
		for (int j = N - 1; j > i; j--)
			if (arr[j] < arr[j - 1])
				swap(arr[j], arr[j - 1]);
}

int main() {
	int arr[] = {2, 3, 1, -3, 5, -6, 7, 8, 6, 9};
	int N = sizeof(arr) / sizeof(arr[0]);
	bubbleSort(arr, N);
	printArray(arr, N);

	return 0;
}

