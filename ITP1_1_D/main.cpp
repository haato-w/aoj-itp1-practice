#include<iostream>
using namespace std;

int main(){
    int input;
    int hour, min, sec;

    cin >> input;

    hour = input / (60 * 60); // int���m�̊���Z��int�ɂȂ�
    input = input % (60 * 60);
    min = input / 60;
    sec = input % 60;

    cout << hour << ":" << min << ":" << sec << endl;

    return 0;
}