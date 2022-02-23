#include<iostream>
#include <algorithm>
#include <cctype>
#include <string>
using namespace std;

int main(void) {
    string w, s;
    int count = 0;

    cin >> w;
    transform (w.begin(), w.end(), w.begin(), ::tolower);

    while (cin >> s) {
        if (s == "END_OF_TEXT")
            break;
        transform (s.begin(), s.end(), s.begin(), ::tolower);
        //cout << s << endl;
        if (s == w)
            count++;
    }

    cout << count << endl;

    return 0;
}