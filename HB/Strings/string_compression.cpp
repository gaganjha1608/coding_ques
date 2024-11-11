#include<iostream>
#include<string>
using namespace std;

int main() {

	string str;

	getline(cin , str);

	int count = 0;

	string compressed;

	for (int i = 1; i < str.size(); i++)	{

		if (str[i - 1] == str[i]) {

			count++;
		}

		else {

			compressed += str[i - 1];
			if (count > 1) {

				compressed += to_string(count);
			}

			count = 1;
		}


	}

	compressed += str.back();
	if (count > 1) {
		compressed += to_string(count);
	}

	cout << compressed << endl;

	return 0;

}
