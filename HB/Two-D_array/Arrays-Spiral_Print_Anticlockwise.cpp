#include<iostream>
#include<algorithm>
using namespace std;

void anticlock(int arr[100][100], int m, int n) {

	int sr = 0;
	int sc = 0;
	int er = n - 1;
	int ec = m - 1;

	while (sr <= er and sc <= ec) {

		for (int i = sr; i <= er; i++) {
			cout << arr[i][ec] << " ";

		}

		ec--;


		for (int i = er; i >= sr; i--) {
			cout << arr[i][sc] << " ";
		}

		sc++;

		for (int i = ec; i >= sc; i--) {

			cout << arr[er][i] << " ";
		}

		er--;

		for (int i = sc; i <= ec; i++) {
			cout << arr[sr][i] << " ";

		}

		sr++;

	}

}


int main() {

	int n, m;

	cin >> n;
	cin >> m;

	int arr[100][100];

	for (int i = 0; i < n; i++) {

		for (int j = 0; j < m; j++) {

			cin >> arr[i][j];
		}

	}

	anticlock(arr, m, n);

	return 0;
}