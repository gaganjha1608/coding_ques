#include<iostream>
#include<algorithm>
using namespace std;

void targetsum(int arr[], int n, int t) {
	int i = 0;
	int j = n - 1;


	while (i < j) {
		int sum = arr[i] + arr[j];

		if (sum == t) {
			cout << arr[i] << " and " << arr[j] << endl;
			j--;
			i++;
		}
		else if (sum > t) {
			j--;
		}
		else i++;

	}
}

int main() {
	int n;
	cin >> n;
	int arr[1000];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = 1; i <= n; i++) {
		bool flag = false;
		for (int j = 0; j < n - i ; j++) {
			if (arr[j] > arr[j + 1]) {

				swap(arr[j], arr[j + 1]);
				flag = true;

			}

		}
		if (flag == false) {
			break;
		}
	}
	// arr[1000] = sort(arr.begin(), arr.end());
	int t;
	cin >> t;


	targetsum(arr, n, t);

}
