#include<iostream>
using namespace std;

int main(void) {
    int n, taro_p, hanako_p;
    string taro_c, hanako_c;

    cin >> n;

    taro_p = hanako_p = 0;
    for (int i = 0; i < n; i++) {
        cin >> taro_c >> hanako_c;

        if (taro_c < hanako_c) {
            hanako_p += 3;
        } else if (taro_c > hanako_c) {
            taro_p += 3;
        } else {
            hanako_p++;
            taro_p++;
        }
    }

    cout << taro_p << " " << hanako_p << endl;

    return 0;
}