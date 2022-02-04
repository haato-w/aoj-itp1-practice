#include<iostream>
#include<stdio.h>
using namespace std;

int main() {
    int a, b, ans1, ans2;
    double ans3;

    cin >> a >> b;

    ans1 = a / b;
    ans2 = a % b;
    ans3 = 1.0 * a / b;

    printf("%d %d %f\n", ans1, ans2, ans3);

    return 0;
}