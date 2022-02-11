#include<iostream>
using namespace std;

int main() {
    int n, m;

    cin >> n >> m;

    int a[n][m], b[m], c[n];

    // 行列の入力
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    // ベクトルの入力
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    // 行列とベクトルの積を計算
    for (int i = 0; i < n; i++) {
        c[i] = 0;
        for (int j = 0; j < m; j++) {
            c[i] += a[i][j] * b[j];
        }
    }

    // 演算結果の出力
    for (int i = 0; i < n; i++) {
        cout << c[i] << endl;
    }

    return 0;
}