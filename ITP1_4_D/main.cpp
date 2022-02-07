#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n, j;
    long min=0, max=0, sum=0;

    cin >> n;

    vector<long> inputs(n);

    for (int i = 0; i < n; i++) {
        cin >> j;
        inputs[i] = j;
    }

    // æ“¾‚µ‚½’l‚ğo—Í
    /*
    for (int i = 0; i < n; i++) {
        cout << inputs[i] << " ";
    }
    cout << endl;
    */

    min = inputs[0];
    max = inputs[0];
    for (int i = 0; i < n; i++) {
        if (min > inputs[i]) {
            min = inputs[i];
        }
        if (max < inputs[i]) {
            max = inputs[i];
        }
        sum += inputs[i];
    }

    cout << min << " " << max << " " << sum << endl;

}