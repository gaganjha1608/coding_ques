#include<iostream>
#include<algorithm>
using namespace std;

void squaresort(int arr[], int n) {

	int krr[100];



	int i = 0;

	int j = n - 1;

	int pos = 0;

	while (i <= j) {

		krr[i] = arr[i] * arr[i];
		krr[j] = arr[j] * arr[j];

		if (krr[i] > krr[j]) {


			krr[pos] = krr[i];
			i++;
			pos++;
		}


		else {

			krr[pos] = krr[j];
			j--;
			pos++;

		}

		cout << krr[pos] << endl;

	}


}



int main() {

	int n ;
	cin >> n;

	int arr[10000];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	squaresort(arr, n);
}
