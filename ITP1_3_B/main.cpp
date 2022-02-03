#include<iostream>
using namespace std;

int main(){
    int v, i=1;

    while (1) {
        cin >> v;
        
        if (v == 0) {
            break;
        }

        cout << "Case " << i << ": " << v << endl;
        i++;
    }

    return 0;
}