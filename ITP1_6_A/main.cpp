#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n, j;

    cin >> n;

    vector<int> inputs(n);

    for (int i = 0; i < n; i++) {
        cin >> j;
        inputs[i] = j;
    }

    for (int i = n - 1; i >= 0; i--) {
        cout << inputs[i];
        if (i != 0)
            cout << " ";
    }
    cout << endl;

    return 0;
}