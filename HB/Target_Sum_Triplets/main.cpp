#include<iostream>
#include<algorithm>

using namespace std;


// function
void triplet(int arr[], int n, int t) {

	sort(arr, arr + n);


	int i = 0;

	while (i < n ) {

		int s = i + 1;
		int e = n - 1;

		while (s < e) {

			if (arr[i] + arr[s] + arr[e] == t) {
				cout << arr[i] << ", " << arr[s] << " and " << arr[e] << endl;
				s++;
				e--;
			}

			else if (arr[i] + arr[s] + arr[e] < t) {
				s++;
			}

			else e--;
		}

		i++;

	}

}

//driver code
int main() {
	int n;
	cin >> n;
	int arr[1000];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int t;
	cin >> t;

	triplet(arr, n, t);

}