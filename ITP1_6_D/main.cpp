#include<iostream>
using namespace std;

int main() {
    int n, m;

    cin >> n >> m;

    int a[n][m], b[m], c[n];

    // �s��̓���
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    // �x�N�g���̓���
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    // �s��ƃx�N�g���̐ς��v�Z
    for (int i = 0; i < n; i++) {
        c[i] = 0;
        for (int j = 0; j < m; j++) {
            c[i] += a[i][j] * b[j];
        }
    }

    // ���Z���ʂ̏o��
    for (int i = 0; i < n; i++) {
        cout << c[i] << endl;
    }

    return 0;
}