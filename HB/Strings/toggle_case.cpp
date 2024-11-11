#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main() {

	string str;

	getline(cin, str);

	string result = "";

	for (char c : str) {

		if (isupper(c)) {

			c = tolower(c);
		}

		else c = toupper(c);

		result += c;

	}

	cout << result << endl;
}