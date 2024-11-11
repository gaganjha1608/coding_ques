#include<iostream>
#include<string>
using namespace std;

int main() {

	string str;

	getline(cin, str);

	string result = "";

	for (char c : str) {

		if (isupper(c) && !result.empty()) {
			result += '\n';
		}

		result += c;
	}

	cout << result << endl;
}

