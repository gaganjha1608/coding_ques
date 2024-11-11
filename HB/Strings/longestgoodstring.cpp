/* A Good String is a string which contains only vowels (a,e,i,o,u) .
   Given a string S, print a single positive integer N where
   N is the length of the longest substring of S that is also a Good String.


Note: The time limit for this problem is 1 second,
so you need to be clever in how you compute the substrings.

input :- cbaeicde
output :- 3
*/

#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int longeststring(const string& str) {

    int cnt = 0;
    int maxSoFar = 0;

    for (char ch : str) {

        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            cnt++;
            maxSoFar = max(maxSoFar, cnt);
        }
        else {

            cnt = 0;

        }

    }
    return maxSoFar;


}


int main() {

    string str;

    getline(cin , str);

    cout << longeststring(str) << endl;


}
