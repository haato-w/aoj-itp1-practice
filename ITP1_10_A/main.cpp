#include<iostream>
#include<cmath>
#include <iomanip>
using namespace std;

int main(void) {
    double x1, y1, x2, y2;

    cin >> x1 >> y1 >> x2 >> y2;
    
    cout << setprecision(10) << sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)) << endl;

    return 0;
}