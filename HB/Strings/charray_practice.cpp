#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int main() {

//------------------------------------------------------------------------------

	/* A character array is a linear data structure used to store a
	   squence of character. A cahracter array must always be
	   terminated with the null character i.e. '\0'. */

	/*	char chstr[] = {'a', 'b', 'c', 'd', 'e', '\0'};

		char str0[] = {'2', '3', '4', '5', '\0'};

		char chstr0[] = "abcde"; // we are initilizing  chstr0 using a string literal

		cout << str0 << endl;

		cout << chstr << endl;

		cout << chstr0 << endl;

	*/

//------------------------------------------------------------------------------

	// Reading input into a character array

	char str1[101];

	// n <= 100

	cin >> str1; // It will not work for widespace

	cout << str1;
//------------------------------------------------------------------------------

	// delimiting a character.

	char ch;

	int i = 0;

	while (true) {

		ch = cin.get();

		if (ch == '\n') {
			break;
		}

		str1[i] = ch;
		i++;

		str1[i] = "\0";
	}
//------------------------------------------------------------------------------

	// char str[] = "gagan jha";

	// int cnt = 0;

	// for (int i = 0; str[i] != '\0'; i++) {

	// 	cnt++;
	// }

	// cout << cnt << endl;

	// cout << strlen(str);

	// char str2[] = "hello";

	// int n = strlen(str2);

	// int i = 0;
	// int j = n - 1;

	// while (i < j) {
	// 	swap(str2[i] , str2[j]);
	// 	i++;
	// 	j--;
	// }

	// cout << str2 << endl;

	// cout << reverse(str2.begin(), str2.end()) << endl;


}