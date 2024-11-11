#include<iostream>
#include<algorithm>
using namespace std;


void rectangle(int arr[1000][1000], int n, int m) {

}
int main() {

	int n;
	int m;

	cin >> n >> m;

	int arr[1000][1000];

	for (int i = 0; i < n; i++) {

		for (int j = 0; j < m; j++) {

			cin >> arr[i][j];
		}
	}

	rectangle(arr, n, m);

	return 0;
}