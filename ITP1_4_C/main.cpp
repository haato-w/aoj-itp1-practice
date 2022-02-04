#include<iostream>
using namespace std;

int main() {
    int a,  b, ans;
    string op;

    while (true) {
        cin >> a >> op >>  b;

        if (op == "+") {
            ans = a + b;
        } else if (op == "-") {
            ans = a - b;
        } else if (op == "*") {
            ans = a * b;
        } else if (op == "/") {
            ans = a / b;
        } else if (op == "?") {
            break;
        }

        cout << ans << endl;

    }

    

    return 0;
}