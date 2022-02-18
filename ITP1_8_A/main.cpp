#include<iostream>
#include <algorithm>
#include<cctype>
using namespace std;

int main() {
    
    string s, ans;
    char c;

    getline(cin, s);

    ans = "";
    for (int i = 0; i < s.length(); i++) {
        c = s[i];
        if ('a' <= c && c <= 'z') {
            ans += toupper(c);
        } else if ('A' <= c && c <= 'Z') {
            ans += tolower(c);
        } else {
            ans += c;
        }
    }
    cout << ans << endl;

    return 0;
}