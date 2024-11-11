
// Strings-Difference in Ascii Codes.cpp

// Take as input S, a string. Write a program that inserts between each
// pair of characters the difference between their ascii codes and print the ans.

// input :- acb
// output :- a2c1b

#include<iostream>
#include<cstring>
#include<cctype>
// #include<cstdlib> // to return absolute value
using namespace std;

string asciidiff(const string &str, int n) {

    string ans;

    ans += str[0];

    for (int i = 1; i < n; i++) {

        int diff = (str[i] - str[i - 1]);
        ans += to_string(diff);
        ans += str[i];

    }

    return ans;
}

int main() {

    string str;

    getline(cin , str);

    int n = str.size();

    string result;

    result = asciidiff(str, n);

    cout << result << endl;

    return 0;

}
