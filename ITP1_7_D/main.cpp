#include<iostream>
using namespace std;

int main() {
    int n, m, l;

    cin >> n >> m >> l;

    int a[n][m], b[m][l];
    long c[n][l];
    
    // 行列Aの入力
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    // 行列Bの入力
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < l; j++) {
            cin >> b[i][j];
        }
    }

    /*
    // 行列A確認用
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[i][j];
            if (j != m - 1)
                cout << " ";
        }
        cout << endl;
    }

    // 行列B確認用
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < l; j++) {
            cout << b[i][j];
            if (j != l - 1)
                cout << " ";
        }
        cout << endl;
    }
    */

    // 行列の積の計算
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < l; j++) {
            c[i][j] = 0;
            for (int k = 0; k < m; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // 行列Cの出力
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < l; j++) {
            cout << c[i][j];
            if (j != l - 1)
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}