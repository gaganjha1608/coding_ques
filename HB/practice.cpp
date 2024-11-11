/* ----------------------------------------------------

//count prime leetcode question

#include<iostream>
#include<cmath>
using namespace std;

int countPrime(int n) {

	int t = sqrt(n);

	int cnt = 0;

	if (n <= 2) return 0;

	bool primes[n];


	for (int i = 2; i < n; i++) {

		primes[i] = true;
	}

	for (int i = 2; i <= t; i++) {

		if (primes[i]) {

			for (int j = i + i; j < n; j += i) {

				primes[j] = false;
			}
		}



	}

	for (int i = 2; i < n; i++) {

		if (primes[i])
			cnt++;
	}

	return cnt;

}

int main() {

	int n;
	cin >> n;

	int ans = countPrime(n);

	cout << ans;
}

-----------------------------------------------------------*/

// sqrt(x) leetcode question
/*
#include<iostream>
using namespace std;

//brute froce apporch O(n)

int sqrtfuncbrute(int n) {

	int st = 0;

	while (st * st <= n) {

		st = st + 1;
	}

	st = st - 1;

	return st;
}

// optimal solution binary search O(logn)

int sqrtfunc(int n) {

	int x = n;

	if (x == 0 || x == 1)

		return x;

	int start = 1;

	int end = x;

	int ans = 1;

	while (start <= end) {

		int mid = (start + end) / 2;

		if (mid * mid <= x) {

			ans = mid;

			start = mid + 1;

		}

		else {

			end = mid - 1;
		}

	}

	return end;

}

int main() {

	int n;

	cin >> n;

	int a = sqrtfunc(n);

	cout << a << endl;

	int b = sqrtfuncbrute(n);

	cout << b << endl;

	return 0;

}
*/
//------------------------------------------------------------------------

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {

	int n;

	cin >> n;

	string str = to_string(n);

	int t = str.length();

	int maxswap = 0;

	for (int i = 0; i < t; i++) {

		for (int j = t - 1; j > i; j--) {

			if (str[i] < str[j])
			{
				swap(str[i], str[j]);

				int temp = stoi(str);
				maxswap = max(temp, maxswap);

				swap(str[i], str[j]);
			}


		}


		if (str[i] - '0' == str[i + 1] - '0') {
			cout << '0' << endl;
		}

		else {
			cout << maxswap << endl;
		}

	}

	cout << maxswap << endl;


}


























