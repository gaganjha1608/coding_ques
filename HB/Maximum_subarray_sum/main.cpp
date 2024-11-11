#include<iostream>
#include<algorithm>
using namespace std;

//using kadane's algorithm
int  maxsum(int arr[], int n) {

	int x[100];

	x[0] = arr[0];

	int maxsofar = x[0];

	for (int i = 1; i < n; i++) {
		x[i] = max(x[i - 1] + arr[i], arr[i]);
		maxsofar = max(maxsofar, x[i]);
	}

	return maxsofar;
}


int main() {
	int n;
	cin >> n;

	int arr[30000];

	for (int i = 0; i < n ; i++) {
		cin >> arr[i];
	}

	cout << maxsum( arr, n) << endl;
}