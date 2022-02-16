#include<iostream>
using namespace std;

int main() {
    int r, c;

    cin >> r >> c;

    int table[r+1][c+1];

    // �e�[�u���̓���
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> table[i][j];
        }
    }

    // row(�s)�̍��v�l���v�Z
    for (int i = 0; i < r; i++) {
        table[i][c] = 0;
        for (int j = 0; j < c; j++) {
            table[i][c] += table[i][j];
        }
    }

    // column(��)�̍��v�l���v�Z
    for (int i = 0; i < c + 1; i++) { // �Ō�̗���v�Z����
        table[r][i] = 0;
        for (int j = 0; j < r; j++) {
           table[r][i] += table[j][i];
        }
    }

    // �e�[�u���̏o��
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