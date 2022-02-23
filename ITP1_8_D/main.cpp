#include<iostream>
using namespace std;

int main(void) {
    string s, p;
    bool flag = false;

    cin >> s;
    cin >> p;

    s = s + s;
    for (int i = 0; i < s.length(); i++) {
        if (p == s.substr(i, p.length())) {
            flag = true;
        }
    }

    if (flag) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
