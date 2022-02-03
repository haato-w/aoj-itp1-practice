#include<iostream>
using namespace std;

int main(){
    int w, h, x, y, r;
    int cir_x_min, cir_y_min, cir_x_max, cir_y_max;

    cin >> w >> h >> x >> y >> r;

    cir_x_min = x - r;
    cir_y_min = y - r;
    cir_x_max = x + r;
    cir_y_max = y + r;

    if (cir_x_min >= 0 && cir_y_min >= 0 && cir_x_max <= w && cir_y_max <= h) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}