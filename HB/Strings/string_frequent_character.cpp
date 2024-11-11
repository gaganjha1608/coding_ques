#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main() {

    string str;

    getline(cin , str);

    int f1[26] = {};

    char result;

    int max = 0;

    int n = str.size();

    for (int i = 0; i < n; i++) {

        f1[str[i] - 'a']++;

    }

    for (int i = 0; i < 26; i++) {

        if (max < f1[i]) {
            max = f1[i];
            result = i + 'a';
        }
    }

    cout << result;


}



