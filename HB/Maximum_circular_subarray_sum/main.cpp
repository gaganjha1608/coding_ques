#include<iostream>
#include<algorithm>
using namespace std;

//using kadane's algorithm
int  circularmaxsum(int arr[], int n) {

	int x[100];

	x[0] = arr[0];

	int maxsofar = x[0];

	for (int i = 1; i < n; i++) {

		x[i] = max(x[i - 1] + arr[i], arr[i]);

		maxsofar = max(maxsofar, x[i]);

	}

	return maxsofar;

}

int minsubarraysum(int arr[n], int n) {

	int x = arr[0];

	int minsofar = x;

	for (int i = 1; i < n; i++) {

		x = max(x + arr[i], arr[i]);

		minsofar = min(minsofar, x);

	}

	return minsofar;
}


int main() {
	int n;
	cin >> n;

	int arr[30000];

	for (int i = 0; i < n ; i++) {
		cin >> arr[i];
	}

	cout << circularmaxsum( arr, n) << endl;
}