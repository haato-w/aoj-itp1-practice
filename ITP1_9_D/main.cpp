#include<iostream>
#include <algorithm>
using namespace std;

int main(void) {
    string str, com, rep_str, rev_str;
    int q, a, b;

    cin >> str;
    cin >> q;

    for (int i = 0; i < q; i++) {
        cin >> com;
        if (com == "print") {
            cin >> a >> b;
            cout << str.substr(a, b - a + 1) << endl;
        } else if (com == "reverse") {
            cin >> a >> b;
            rev_str = str.substr(a, b - a + 1);
            //cout << rev_str << endl;
            reverse(rev_str.begin(), rev_str.end());
            str = str.replace(a, b - a + 1, rev_str);
            //cout << str << endl;
        } else if (com == "replace") {
            cin >> a >> b >> rep_str;
            str = str.replace(a, b - a + 1, rep_str);
            //cout << str << endl;
        }
    }

    return 0;
}