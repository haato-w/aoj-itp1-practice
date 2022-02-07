#include<iostream>
using namespace std;

int show_rec(int h, int w) {
    for (int i = 0; i < w; i++)
        cout << "#";
    cout << endl;

    for (int i = 0; i < h-2; i++) {
        cout << "#";
        for (int j = 0; j < w-2; j++)
            cout << ".";
        cout << "#";
        cout << endl;
    }
    
    for (int i = 0; i < w; i++)
        cout << "#";
    cout << endl << endl;

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