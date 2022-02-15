#include<iostream>
using namespace std;

int main() {
    int m, f, r, n;
    int scores[50][3];

    n = 0;
    while (1) {
        cin >> m >> f >> r;
        if (m == -1 && f == -1 && r == -1)
            break;
        scores[n][0] = m;
        scores[n][1] = f;
        scores[n][2] = r;
        n++;
    }

    for (int i = 0; i < n; i++) {
        if (scores[i][0] == -1 || scores[i][1] == -1) {
            cout << "F" << endl;
        } else if (scores[i][0] + scores[i][1] >= 80) {
            cout << "A" << endl;
        } else if (scores[i][0] + scores[i][1] >= 65) {
            cout << "B" << endl;
        } else if (scores[i][0] + scores[i][1] >= 50) {
            cout << "C" << endl;
        } else if (scores[i][0] + scores[i][1] >= 30) {
            if (scores[i][2] >= 50) {
                cout << "C" << endl;
            } else {
                cout << "D" << endl;
            }
        } else {
            cout << "F" << endl;
        }
    }

    return 0;
}