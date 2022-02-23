#include<iostream>
#include<vector>
using namespace std;

int main(void) {
    vector<string> result(1);

    int index, loop, input_num;
    string base, new_str;

    index = 0;
    while (cin >> base) {
        if (base == "-")
            break;
        result.resize(index+1);
        cin >> loop;
        for (int i = 0; i < loop; i++) {
            cin >> input_num;
            new_str = base.substr(input_num, base.length() - input_num) + base.substr(0, input_num);
            base = new_str;
        }
        result[index++] = base;
    }

    for (int i = 0; i < index; i++) { 
        cout << result[i] << endl;
    }

    return 0;
}