#include<iostream>
#include<vector>
using namespace std;

int calc_combi(int n, int x) {
    int count = 0;
    for (int i = n; i > 2; i--) {
        for (int j = i - 1; j > 1; j--) {
            for (int k = j - 1; k > 0; k--) {
                if (i + j + k == x) {
                    //cout << i << " " << j << " " << k << endl;
                    count++;
                }
            }
        }
    }

    return count;
}

int main() {
    int n, x, result;
    vector<int> arrayResult;

    /*
    // テスト用
    cin >> n >> x;
    result = calc_combi(n, x);
    cout << result << endl;
    */
    
    n = 0;
    while (1) {
        cin >> n >> x;
        if (n == 0 && x == 0)
            break;
        result = calc_combi(n, x);
        arrayResult.push_back(result);
    }

    for (int i = 0; i < arrayResult.size(); i++) {
        cout << arrayResult[i] << endl;
    }

    return 0;
}