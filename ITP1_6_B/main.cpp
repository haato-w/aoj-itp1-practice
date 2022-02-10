#include<iostream>
using namespace std;

int main() {
    int n, v;
    char p;
    int s_arr[13], h_arr[13], c_arr[13], d_arr[13];
    
    for (int i = 0; i < 13; i++) {
        s_arr[i] = 0;
        h_arr[i] = 0;
        c_arr[i] = 0;
        d_arr[i] = 0;
    }

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> p >> v;
        //cout << p << " " << v << endl;
        if (p == 'S') {
            s_arr[v-1] = 1;
        } else if (p == 'H') {
            h_arr[v-1] = 1;
        } else if (p == 'C') {
            c_arr[v-1] = 1;
        } else if (p == 'D') {
            d_arr[v-1] = 1;
        }
    }

    for (int i = 0; i < 13; i++) {
        if (s_arr[i] == 0)
            cout << "S" << " " << i+1 << endl;
    }
    for (int i = 0; i < 13; i++) {
        if (h_arr[i] == 0)
            cout << "H" << " " << i+1 << endl;
    }
    for (int i = 0; i < 13; i++) {
        if (c_arr[i] == 0)
            cout << "C" << " " << i+1 << endl;
    }
    for (int i = 0; i < 13; i++) {
        if (d_arr[i] == 0)
            cout << "D" << " " << i+1 << endl;
    }

    return 0;
}