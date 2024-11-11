/* Take as input S, a string. Write a function that returns true
if the string is a palindrome and false otherwise.
Print the value returned.

input = abba
output = true

*/

#include<iostream>
#include<string>

using namespace std;

bool ispalindrome(const string& str) {

    int i = 0;
    int j = str.size() - 1;

    while (i < j) {

        if (str[i] != str[j]) {
            return false;
        }

        i++;
        j--;
    }

    return true;


}

int main() {

    string str;

    getline(cin , str);

    int ans = ispalindrome(str);

    if (ans == 1) {

        cout << "true" << endl;
    }

    else cout << "false" << endl;

    // cout << ispalindrome(str) << endl;

    return 0;
}

