#include<iostream>
using namespace std;

int main() {
    int r, c;

    cin >> r >> c;

    int table[r+1][c+1];

    // テーブルの入力
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> table[i][j];
        }
    }

    // row(行)の合計値を計算
    for (int i = 0; i < r; i++) {
        table[i][c] = 0;
        for (int j = 0; j < c; j++) {
            table[i][c] += table[i][j];
        }
    }

    // column(列)の合計値を計算
    for (int i = 0; i < c + 1; i++) { // 最後の列も計算する
        table[r][i] = 0;
        for (int j = 0; j < r; j++) {
           table[r][i] += table[j][i];
        }
    }

    // テーブルの出力
    for (int i = 0; i < r + 1; i++) {
        for (int j = 0; j < c + 1; j++) {
            cout << table[i][j];
            if (j != c)
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}