#include<iostream>
using namespace std;

int main() {
    int n, b, f, r, v;
    int residents[4][3][10];

    // ������
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 10; k++) {
                residents[i][j][k] = 0;
            }
        }
    }

    // �f�[�^�̓���
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> b >> f >> r >> v;
        residents[b-1][f-1][r-1] += v;
    }

    // ���ʂ̏o��
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 10; k++) {
                cout << " " << residents[i][j][k];
            }
            cout << endl;
        }
        if (i != 3) 
            cout << "####################" << endl;
    }

    return 0;
}