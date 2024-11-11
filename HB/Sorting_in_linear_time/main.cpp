#include<iostream>
#include<algorithm>
using namespace std;

void Swap(int arr[], int i, int j) {

	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;

}

void linearsort(int arr[] , int n) {

	int low = 0;
	int mid = 0;
	int high = n - 1;

	while (mid <= high) {

		if (arr[mid] == 0) {
			Swap(arr, low, mid);
			low++;
			mid++;
		}

		else if (arr[mid] == 1) {
			mid++;
		}
		else {
			Swap(arr, mid, high);
			high--;
		}
	}

}



int main() {

	int n;
	cin >> n;

	int arr[10000];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	linearsort(arr, n);

	for (int i = 0; i < n; i++) {
		cout << arr[i] << endl;
	}

}