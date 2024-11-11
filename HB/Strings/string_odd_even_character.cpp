#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main() {

	string str;

	getline(cin, str);

	for (int i = 0; i < str.size(); i++) {

		if (i % 2 == 0) {
			// str[i] = static_cast<char>(static_cast<int>(str[i] + 1));
			str[i] = static_cast<int>(str[i] + 1);
		}

		else {

			str[i] = static_cast<int>(str[i] - 1);
		}
	}

	cout << str << endl;
}