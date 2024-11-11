#include<iostream>
#include<string>
using namespace std;

int main() {

	string str;

	getline(cin, str);

	str.trim();

	cout << str << endl;
}