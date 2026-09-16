#include <bits/stdc++.h>
using namespace std;

string removeSpaces(string s) {
    string result = "";
    for (char c : s) {
        if (c != ' ') {
            result += c;
        }
    }
    return result;
}

int main() {
    string s;
    getline(cin, s);
    cout << removeSpaces(s) << endl;
    return 0;
}