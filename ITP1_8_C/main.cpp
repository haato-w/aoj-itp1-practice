#include<iostream>
#include<cctype>
#include<map>
using namespace std;

int main() {
    map<char, int> table;

    // テーブルの初期化
    for (char alpha = 'a'; alpha <= 'z'; alpha++) {
        table[alpha] = 0;
    }

    char sh;
    while (cin >> sh) {
        if (isalpha(sh)) {
            //cout << s[i]);
            table[tolower(sh)] += 1;
        }
    }

    // 出力
    for (char alpha = 'a'; alpha <= 'z'; alpha++) {
        cout << alpha << " : " << table[alpha] << endl;
    }

    return 0;
}