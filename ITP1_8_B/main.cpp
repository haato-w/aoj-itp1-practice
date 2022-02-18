#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> ans;
    string input;
    char c;

    while (1) {
        cin >> input;
        if (input == "0")
            break;
        int sum = 0;
        for (c: input) {
            //cout << c << endl;
            sum += c - '0';
        }
        //cout << sum << endl;
        ans.push_back(sum);
    }

    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << endl;
    }

    return 0;
}