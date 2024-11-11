#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	n = n + 1;
	int a = 0;
	int b = 1;
	int c = a + b;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			cout << a  << '\t';
			c = a + b;
			a = b;
			b = c;
			c = a;

		}
		cout << endl;
	}
}