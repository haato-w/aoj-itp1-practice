#include<iostream>
using namespace std;

int show_rec(int h, int w) {
    int flag = 0;

    for (int i = 0; i < h; i++) {
        if (i % 2 == 0) {
            flag = 0;
        } else {
            flag = 1;
        }
        for (int j = 0; j < w; j++){
            if (flag == 0)
                 cout << "#";
            else
                 cout << ".";
            flag = (flag + 1) % 2;
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}

int main() {
    int h, w;

    while (1) {
        cin >> h >> w;

        if (h == 0 && w == 0)
            break;

        show_rec(h, w);
    }

    return 0;
}